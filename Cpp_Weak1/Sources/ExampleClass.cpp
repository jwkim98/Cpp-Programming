//
// Created by jwkim98 on 3/20/19.
//
#include <ExampleClass.hpp>

#include <iostream>

namespace CppStudy {

    Example::Example()
    {
        std::cout<<"Hello C++!"<<std::endl;
    }

    Example::Example(int member) : _member(member) { }

    Example::~Example()
    {
        std::cout<<"Bye Bye!"<<std::endl;
    }

}
