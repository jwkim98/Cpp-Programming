//
// Created by jwkim98 on 4/25/19.
//

#ifndef CPP_WEEK5_TEMPLATE_HPP
#define CPP_WEEK5_TEMPLATE_HPP

#include <iostream>
#include <memory>

int add(int a, int b) { return a + b; }



template <typename U> int add(int a, int b) { return a + b * 2; }

template <typename U> float add(float a, float b) { return a + b * 2; }

template <int a> int factorial() {
  return (a == 0) ? 1 : a * factorial<a - 1>();
}

template <typename T> class TemplateClass {
public:
  TemplateClass(T member) : m_member(member) {}

//  TemplateClass<T>& operator=(TemplateClass&& h){
//      ptr = std::move(h.ptr);
//  }

private:
  T m_member;
  //std::unique_ptr<int> ptr;
};

template <> class TemplateClass<int> {
public:
  TemplateClass(int member) : m_member(member), m_member2(member) {}

private:
  int m_member;
  int m_member2;
};

// template <typename T, typename U> T add(T a, T b, U c) {
//  std::cout << "value of type U:" << c << std::endl;
//  return a + b;
//}
//
// template <typename U> int add(int a, int b, U c) {
//  std::cout << "value of type U:" << c << std::endl;
//  return a + b;
//}
//
// template <typename U> float add(float a, float b) { return a + b; }
//
// template <typename T> class classTemplate {
// public:
//  classTemplate();
//
// private:
//  T m_member;
//};
//
// template <typename T>
// classTemplate<T>::classTemplate() : m_member(static_cast<T>(0)) {}
//
// template <> class classTemplate<int> {
// public:
//  classTemplate();
//
// private:
//  int m_member;
//  int m_member2;
//};
//
// classTemplate<int>::classTemplate() : m_member {}

#endif // CPP_WEEK5_TEMPLATE_HPP
