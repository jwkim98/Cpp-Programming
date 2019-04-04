#include <iostream>
#include <functional>
#include "includes/MyClass.hpp"
#include "includes/Inheritance.hpp"

using namespace CppWeek2;
using namespace Inheritance;

MyClass DoSomething(MyClass& myClass)
{
    std::cout<<"Do Something!"<<std::endl;
    return myClass;
}

struct structure{
    int a;
    float b;
};


int main()
{

    MyClass myClass1 = MyClass(1);
    MyClass myClass2(2);
    MyClass myClass3(3);

    /// MyClass myClass3 = (myClass2.operator=(myClass1));

    MyClass myClass4 = (myClass2 + myClass1 + myClass3);

    /// MyClass myClass4 = add(myClass2, add(myClass1, myClass3)); (JAVA == TRASH)

//    MyClass myClass3;
//    myClass3 = (myClass1 + myClass2);
//
//    myClass1 + myClass2 + myClass3;

    // std::function<void(int)> func = [](int arg1){std::cout<<"Lambda!"<<std::endl;};

    // add(myClass1, add(myClass2, myClass3)); JAVA

    return 0;
}