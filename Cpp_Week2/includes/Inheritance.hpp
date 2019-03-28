//
// Created by jwkim98 on 3/28/19.
//

#ifndef CPPSTUDY_INHERITANCE_HPP
#define CPPSTUDY_INHERITANCE_HPP

#include <iostream>

namespace Inheritance {
    class ParentClass {

    public:
        ParentClass(int member);

        ParentClass(ParentClass& _myclass);

        virtual int getMember() = 0;

        ~ParentClass();

    protected:
        int _member = 0;
    };

    class ChildClass : public ParentClass {
    public:
        ChildClass(int member);

        ~ChildClass();

        int getMember() override;

    };
} // namespace Inheritance

#endif // CPPSTUDY_INHERITANCE_HPP
