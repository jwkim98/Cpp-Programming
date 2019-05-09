//
// Created by jwkim98 on 5/9/19.
//
#include "Lambda.hpp"
#include <functional>
#include <iostream>
#include <string>

namespace Lambda {
void ExecuteFunctor(const std::function<void(std::string)> &lambda,
                    std::string string) {
  lambda(string);
}

void FunctorExample() {
  auto addString1 = AddString1("Programming is ");
  std::cout << addString1("Fun!") << std::endl;

  std::string str = "Chicken is";
  auto addString2 = AddString2(str);
  std::cout<< addString2("Delicious!")<<std::endl;
  std::cout<<str<<std::endl;

}

void LambdaExample() {

  std::string str = "C++ is the best language ever made!";
  std::string str2 = "hahaha";
  auto lambda1 = [&str](std::string string) { str = string; };
  auto lambda2 = [&](std::string string) { str = string; };
  auto lambda3 = [str](std::string string) mutable {
    str = string;
    return str;
  };
  auto lambda4 = [=](std::string string) mutable {
    str = string;
    return str;
  };

  std::cout << str << std::endl;
  lambda1("No, Java is better!");
  std::cout << str << std::endl;
  lambda2("Actually, Golang is best!");
  std::cout << str << std::endl;
  lambda3("After you learn Python, above three is going to look like crap");
  std::cout << str << std::endl;
  lambda4("No language can beat C#");
  std::cout << lambda4("No language can beat C#") << std::endl;

  // lambda1();
}
} // namespace Lambda
