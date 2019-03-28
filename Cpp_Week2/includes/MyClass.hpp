//
// Created by jwkim98 on 3/26/19.
//

#ifndef CPPSTUDY_MYCLASS_HPP
#define CPPSTUDY_MYCLASS_HPP

#include <ostream>

namespace CppWeek2
{
    class MyClass
    {
    public:
        MyClass() = default;

        explicit MyClass(int number);

        MyClass(MyClass& rhs);

        MyClass& operator=(const MyClass& rhs);

        MyClass(MyClass &&rhs) noexcept;

        MyClass& operator=(MyClass&& rhs) noexcept;

        MyClass operator+(const MyClass &rhs) const;

        MyClass operator-(const MyClass &rhs) const;

        bool operator==(const MyClass& rhs) const;

        bool operator!=(const MyClass& rhs) const;

        bool operator<(const MyClass& rhs) const;

        bool operator>(const MyClass& rhs) const;

        bool operator<=(const MyClass& rhs) const;

        bool operator>=(const MyClass& rhs) const;

        friend std::ostream& operator<<(std::ostream& os, const MyClass& aClass);

    private:
        int _number;
    };
}

#endif //CPPSTUDY_MYCLASS_HPP
