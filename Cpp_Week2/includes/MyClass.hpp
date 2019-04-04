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

    ///Private for default
    public:
        /// Function overloading
        MyClass() = default;

        explicit MyClass(int number);
        /// Copy constructor
        MyClass(MyClass& rhs);
        /// Move constructor
        MyClass(MyClass &&rhs) noexcept;

        ~MyClass();

        /// Copy-assign operator
        MyClass& operator=(const MyClass& rhs);

        /// Move assign operator
        MyClass& operator=(MyClass&& rhs) noexcept;

        /// Operators
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
        float _float_number;
    protected:
        //lskjfkjldksjfwe protected
    };
}

#endif //CPPSTUDY_MYCLASS_HPP
