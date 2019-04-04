//
// Created by jwkim98 on 4/4/19.
//

#ifndef CPPSTUDY_DEADLYDIAMOND_HPP
#define CPPSTUDY_DEADLYDIAMOND_HPP

class GrandFather{
    //static int Money;

public:
    // Abstract class
    GrandFather();

    virtual void Walk() = 0;
    //protected:
//    int _age;

};

class Parent1 : public virtual GrandFather{
public:
    Parent1();
};

class Parent2: public virtual GrandFather{
public:
    Parent2();

};

class GrandSon: public Parent1, public Parent2{

    GrandSon();

    virtual void Walk();
    int _myAge;
};
#endif //CPPSTUDY_DEADLYDIAMOND_HPP
