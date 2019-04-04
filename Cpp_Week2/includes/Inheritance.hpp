//
// Created by jwkim98 on 3/28/19.
//

#ifndef CPPSTUDY_INHERITANCE_HPP
#define CPPSTUDY_INHERITANCE_HPP

#include <iostream>

namespace Inheritance {

class Hero {

public:
  Hero(int justice,int braveness,int power);

  Hero(Hero &_myclass);

  Hero();

  /// Abstract class
  virtual void Fly();

  void SaveEarth();
  // Destructor should be virtual if it was inherited by another class
  virtual ~Hero();

protected:
  int _justice = 50;
  int _bravery = 100;
  int _power = 200;
};


class Mark7
{
public:
    void activateArcReactor();
    int ArcReactor;
};


class Jarvis
{

};

class Ironman : public Hero, private Mark7, private Jarvis {
public:
  Ironman(int justice);

  ~Ironman();

  //void Fly()  override;

  void ShootLaser();
};

class Tony : public Ironman {
public:
  Tony();
};

class Thor : public Hero {
public:
  Thor(int justice);

  ~Thor();

  void Fly() override;

//private:
//    Foo foo;
};

} // namespace Inheritance

#endif // CPPSTUDY_INHERITANCE_HPP
