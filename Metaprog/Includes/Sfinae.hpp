//
// Created by jwkim98 on 4/2/19.
//
#include "TypeExamine.hpp"

#include <iostream>
#include <sys/types.h>
#include <type_traits>

#ifndef METAPROG_SFINAE_HPP
#define METAPROG_SFINAE_HPP
struct foo {
    void serialize(){
    }
};

//template <> struct std::is_floating_point<foo> : false_type {};

template <typename> struct is_enabled {};

template <typename T, typename = void> struct some_type {};

template <typename T>
struct some_type<T, std::enable_if_t<std::is_floating_point<T>::value>> {
  explicit some_type(T member) : _member(member) {
    std::cout << "Floating point class constructed" << std::endl;
  }
  T _member;
};

template <typename T>
struct some_type<
    T, std::enable_if_t<decltype(hasSerialize(std::declval<T>()))::value>> {
  explicit some_type(T member) : _member(member) {
    std::cout << "hasSerialize class constructed" << std::endl;
  }
  T _member;
};

//template <typename T>
//struct some_type<T, std::enable_if_t<!std::is_floating_point<T>::value>> {
//  explicit some_type(T member) : _member(member) {
//    std::cout << "Non-floating point class constructed" << std::endl;
//  }
//  T _member;
//};

template <typename T>
void func(T member, std::enable_if_t<std::is_floating_point<T>::value, void *> =
                        nullptr) {
  std::cout << "floating point type" << std::endl;
}

template <typename T>
void func(
    T member,
    std::enable_if_t<!std::is_floating_point<T>::value, void *> = nullptr) {
  std::cout << "Non-floating point type" << std::endl;
}

// template <typename T> struct some_type<T, std::true_type> {
// public:
//  some_type() { std::cout << "True type Constructed!" << std::endl; }
//
//  void print() { std::cout << "print!" << std::endl; }
//  T _member;
//};
//
// template <typename T> struct some_type<T, std::false_type> {
//  some_type() { std::cout << "False type Constructed!" << std::endl; }
//  void print() { std::cout << "print!" << std::endl; }
//  T _member2;
//  T _member;
//};

template <int a> struct factorial { int num = a * factorial<a - 1>().num; };

template <> struct factorial<0> { int num = 1; };

int mul(int a, int b) { return a * b; }

constexpr int factorial2(int input) {
  return (input == 1) ? 1 : input * factorial2(input - 1);
}

template <int input> constexpr int factorial3() {

  if constexpr (input == 1)
    return 1;
  else
    return input * factorial3<input - 1>();
}

#endif // METAPROG_SFINAE_HPP
