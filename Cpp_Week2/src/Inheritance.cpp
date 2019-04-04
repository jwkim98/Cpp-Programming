//
// Created by jwkim98 on 3/28/19.
//

#include "../includes/Inheritance.hpp"

namespace Inheritance {

Hero::Hero(int justice, int braveness, int power)
    : _justice(justice), _bravery(braveness), _power(power) {
  std::cout << "New Hero!" << std::endl;
}

Hero::Hero() {}

Hero::Hero(Hero &_myclass) { _justice = _myclass._justice; }

Hero::~Hero() { std::cout << "Bye Bye Hero!" << std::endl; }

void Hero::Fly() { std::cout << "Default fly" << std::endl; }

void Hero::SaveEarth() { std::cout << "I SAVED EARTH!!" << std::endl; }

void Mark7::activateArcReactor() { std::cout << "Activate Mark7" << std::endl; }

Ironman::Ironman(int justice) : Hero(justice, 30, 70), Mark7(), Jarvis() {
  std::cout << "I am Iron man!" << std::endl;
}

Ironman::~Ironman() { std::cout << "Bye Bye Iron Man!!" << std::endl; }

//void Ironman::Fly() { std::cout << "Iron man flies!" << std::endl; }

void Ironman::ShootLaser() {
  activateArcReactor();
  std::cout << " Beam! " << std::endl;
}

Thor::Thor(int justice) : Hero(justice, 100, 100) {
  std::cout << "I am Thor!!" << std::endl;
}

Thor::~Thor() { std::cout << "Bye Bye Thor!! " << std::endl; }

void Thor::Fly() { std::cout << "Thor flies!" << std::endl; }

Tony::Tony() : Ironman(0) {}

} // namespace Inheritance