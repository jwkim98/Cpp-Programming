//
// Created by jwkim98 on 3/20/19.
//

#ifndef CPP_WEAK1_EXAMPLECLASS_HPP
#define CPP_WEAK1_EXAMPLECLASS_HPP
#include<iostream>
namespace CppStudy {

    class Example {
    public:
        ///Constructor
        Example();

        ///Constructor with initializer
        explicit Example(int member);

        ///Destructor
        ~Example();

        int& returnReference();

    private:
        int _member = 0;
    };

}

#endif //CPP_WEAK1_EXAMPLECLASS_HPP
