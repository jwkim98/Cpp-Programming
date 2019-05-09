#include <iostream>
#include <functional>
#include "includes/MyClass.hpp"
#include "includes/Inheritance.hpp"
#include "includes/DeadlyDiamond.hpp"

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

//    MyClass myClass1 = MyClass(1);
//    MyClass myClass2(2);
//    MyClass myClass3(3);
//
//    /// MyClass myClass3 = (myClass2.operator=(myClass1));
//
//    MyClass myClass4 = (myClass2 + myClass1 + myClass3); //myClass1.operator+(myClass2.operator+(myClass3));
//
//    myClass1 + myClass2;
//
//    MyClass myClass5 = myClass1;
//
//    // MyClass myClass4 = add(myClass2, add(myClass1, myClass3)); (JAVA == TRASH)
//
//   // MyClass myClass3;
//    myClass3 = (myClass1 + myClass2);


//Hero* hero = new Ironman(100);
//Hero* hero2 = new Thor(150);
//
//hero2->Fly();
//
//delete hero2;

GrandSon grandSon;
grandSon.Walk();

Parent1 parent1;
parent1.Walk();

auto a = 3.0/4+3.0/4;
std::cout<<a<<std::endl;


    return 0;
}