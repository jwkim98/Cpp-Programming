//
// Created by jwkim98 on 3/28/19.
//

#ifndef CPPSTUDY_INHERITANCE_HPP
#define CPPSTUDY_INHERITANCE_HPP

#include <iostream>

namespace Inheritance {
class Hero {

public:
  Hero(int number);

  Hero(Hero &_myclass);

  /// Abstract class
  virtual void Fly() = 0;

  ~Hero();

protected:
  int _member = 0;
};

class Ironman : public Hero {
public:
  Ironman(int number);

  ~Ironman();

  void Fly() override;

  void ShootRazer();
};

class Tony : public Ironman {
public:
  Tony();
};

class Thor : public Hero {
public:
  Thor(int number);

  ~Thor();

  void Fly() override;
};
} // namespace Inheritance

#endif // CPPSTUDY_INHERITANCE_HPP
