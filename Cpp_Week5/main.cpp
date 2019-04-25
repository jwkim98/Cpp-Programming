#include "Template.hpp"

#include <bits/unique_ptr.h>
#include <deque>
#include <iostream>
#include <vector>

class exampleClass {
public:
  std::vector<int> *ptr; // size 10000000000
};

template <typename T> auto constexpr sum(T first) { return first; }

template <typename T, typename... Rest> auto constexpr sum(T first, Rest... rest) {
    return first + sum(rest...); // C++ 14
}

template <typename... Args> auto constexpr
sum2(Args... args) { return (args + ... + 0); } // C++ 17

int func1(exampleClass &&source, exampleClass &destination) {
  destination.ptr = std::move(source.ptr);
  source.ptr = nullptr;
}

template <typename T>
T add(T a) { return a; }

template <typename T>
void function(T& a) {  }

template <typename T>
void function2(const T& a) {  }


template <typename T>
void function3(T&& a) {  } // universal reference

template <typename T>
decltype(auto) function4(T a){
    return a;
}

template <typename T>
decltype(auto) function5(T a){
    return std::move(a); // T&&
}


//T& + T&& = T&
// reference collapse

// Template
int main() {

  // int a = factorial<5>();
  // std::unique_ptr<example> ptr = std::make_unique<example>();

  int num = 0;
  const int num2 = 0;
  const int &num3 = 0;

  int a1 = add(num);  // typename T  :  int, a : int
  int a2 = add(num2); // typename T  : int, a : int
  int a3 = add(num3); // typename T  : int, a : int

  auto t = TemplateClass<float>(1);

  function(num); // typename T : int  a : int&
  function(num2); // typename T : const int a : const int&
  function(num3); // typename T : const int a : const int&

  function2(num); // typename T : int  a : int&
  function2(num2); // typename T : int a : const int&
  function2(num3); // typename T : int a : const int&

  function3(num); // typename T : int&  a : int&
  function3(num2); // typename T : const int& a : const int&
  function3(num3); // typename T : const int& a : const int&
  function3(27); // typename T : int a : int&&

  auto b0 = num3; // auto : int
  auto& b1 = num; // auto : int ,b1 : int&
  auto&& b2 = num; // auto : int&,  b2 : int&

  // l-value r-value (left, right)
  int lvalue1 = 2;
  int lvalue2 = 3;
  int lvalue3 = (lvalue1 + lvalue2);

  decltype(lvalue1) haha = 1; //declare type

  exampleClass example = exampleClass();
  exampleClass example2 = exampleClass();

  // func1(std::move(example), example2);

  int sumResult = sum2(1,2,3,4,5,6,7,8,9,10);

  std::cout << "Variadic Template! " << sumResult <<std::endl;
  return 0;
}