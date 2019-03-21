//
// Created by jwkim98 on 3/20/19.
//
#include <ExampleClass.hpp>

#include <iostream>
#include <memory>

namespace CppStudy {

    Example::Example()
    {
        std::cout<<"Constructed!"<<std::endl;
    }

    Example::Example(int member) : _member(member) { }

    Example::~Example()
    {
        std::cout<<"Bye Bye!"<<std::endl;
    }


    int& Example::returnReference() {
        int a = 1;

        //int* ptr = new int[1];
        std::unique_ptr<int> uniquePtr = std::make_unique<int>(1);
        std::shared_ptr<int> sharedPtr;
        std::weak_ptr<int> weakPtr;

        /// WRONG!!! ('a' will be deleted when this function exists
        return a;
    }

}
