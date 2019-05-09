//
// Created by jwkim98 on 4/4/19.
//

#ifndef CPPSTUDY_DEADLYDIAMOND_HPP
#define CPPSTUDY_DEADLYDIAMOND_HPP
#include <iostream>

class GrandFather {
  // static int Money;
public:

    GrandFather(int age) : _age(age)
    {

    }

  virtual void Walk() = 0;
  // protected:
    int _age = 0;
};

class Parent1 : public virtual GrandFather {
public:
    Parent1() : GrandFather(3){}
  virtual void Walk() override { std::cout << "parent1: " << _age<< std::endl; }
  //virtual void makeVirtual() = 0;
};

class Parent2 : public virtual GrandFather {
public:
    Parent2() : GrandFather(7){}
  virtual void Walk() override { std::cout << "parent2: " << _age<<  std::endl; }
};

class GrandSon : public Parent1, public Parent2 {

public:
    /// Must initialize virtual base class
    /// base class initialization of Parent1 and Parent2 is ignored
  GrandSon() : Parent1(), Parent2(), GrandFather(1), _myAge(0){}

  virtual void Walk() {
    Parent2::Walk();
  }
  int _myAge;
};
#endif // CPPSTUDY_DEADLYDIAMOND_HPP
