//
// Created by jwkim98 on 3/28/19.
//

#include "../includes/Inheritance.hpp"

namespace Inheritance {
Hero::Hero(int number) : _member(number) {
  std::cout << "New Hero!" << std::endl;
}

Hero::Hero(Hero &_myclass) { _member = _myclass._member; }

Hero::~Hero() { std::cout << "Bye Bye Hero!" << std::endl; }

Ironman::Ironman(int number) : Hero(number) {
  std::cout << "I am Iron man!" << std::endl;
}

Ironman::~Ironman() { std::cout << "Bye Bye Iron Man!!" << std::endl; }

void Ironman::Fly() { std::cout << "Iron man flies!" << std::endl; }

void Ironman::ShootRazer() { std::cout << " Beam! " << std::endl; }

Thor::Thor(int number) : Hero(number) {
  std::cout << "I am Thor!!" << std::endl;
}

Thor::~Thor() { std::cout << "Bye Bye Thor!! " << std::endl; }

void Thor::Fly() { std::cout << "Thor flies!" << std::endl; }

Tony::Tony() : Ironman(0)
{
}

} // namespace Inheritance