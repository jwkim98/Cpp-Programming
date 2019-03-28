//
// Created by jwkim98 on 3/28/19.
//

#include "../includes/Inheritance.hpp"

namespace Inheritance {
    ParentClass::ParentClass(int member)
            :_member(member)
    {
        std::cout << "Constructed!" << std::endl;
    }

    ParentClass::ParentClass(ParentClass& _myclass) { _member = _myclass._member; }

    ParentClass::~ParentClass() { std::cout << "Base Destructor!" << std::endl; }

    ChildClass::ChildClass(int member)
            :ParentClass(member)
    {
        std::cout << "Yourclass Constructor" << std::endl;
    }

    ChildClass::~ChildClass() { std::cout << "Derived Destructor!" << std::endl; }

    int ChildClass::getMember() { return _member; }

} // namespace Inheritance