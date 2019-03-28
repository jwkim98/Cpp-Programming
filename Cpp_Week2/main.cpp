#include <iostream>
#include "includes/MyClass.hpp"
#include "includes/Inheritance.hpp"

using namespace CppWeek2;
using namespace Inheritance;

int main()
{
    MyClass myClass1 = MyClass(1);
    MyClass myClass2(2);

    MyClass copyClass = (myClass1 + myClass2);

    MyClass myClass3;
    myClass3 = (myClass1 + myClass2);


    std::cout << "Hello, World!" << std::endl;

    return 0;
}