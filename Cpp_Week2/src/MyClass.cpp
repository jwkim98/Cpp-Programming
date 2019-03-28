//
// Created by jwkim98 on 3/26/19.
//

#include "../includes/MyClass.hpp"
#include <iostream>

namespace CppWeek2 {

    MyClass::MyClass(int number)
            :_number(number)
    {
        std::cout << "Constructor called!" << std::endl;
    }

    MyClass::MyClass(MyClass& rhs)
            :_number(rhs._number)
    {
        std::cout << "Copy Constructor called!" << std::endl;
    }

    MyClass& MyClass::operator=(const MyClass& rhs)
    {
        std::cout << "Copy assign-operator called!" << std::endl;
        _number = rhs._number;
        return *this;
    }

    MyClass::MyClass(MyClass&& rhs) noexcept
            :_number(rhs._number)
    {
        std::cout << "Move Constructor called!" << std::endl;
    }

    MyClass& MyClass::operator=(MyClass&& rhs) noexcept
    {
        std::cout << "Move assign-operator called!" << std::endl;
        _number = rhs._number;
        return *this;
    }

    MyClass MyClass::operator+(const MyClass& rhs) const
    {
        MyClass addedClass = MyClass(_number+rhs._number);
        return addedClass;
    }

    MyClass MyClass::operator-(const MyClass& rhs) const
    {
        MyClass subtractedClass = MyClass(_number-rhs._number);
        return subtractedClass;
    }

    bool MyClass::operator<(const CppWeek2::MyClass& rhs) const
    {
        return _number<rhs._number;
    }

    bool MyClass::operator>(const CppWeek2::MyClass& rhs) const
    {
        return rhs<*this;
    }

    bool MyClass::operator<=(const CppWeek2::MyClass& rhs) const
    {
        return !(rhs<*this);
    }

    bool MyClass::operator>=(const CppWeek2::MyClass& rhs) const
    {
        return !(*this<rhs);
    }

    bool MyClass::operator==(const CppWeek2::MyClass& rhs) const
    {
        return _number==rhs._number;
    }

    bool MyClass::operator!=(const CppWeek2::MyClass& rhs) const
    {
        return !(rhs==*this);
    }

    std::ostream& operator<<(std::ostream& os, const CppWeek2::MyClass& aClass)
    {
        os << "_number: " << aClass._number;
        return os;
    }

} // namespace CppWeek2