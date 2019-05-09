//
// Created by jwkim98 on 5/9/19.
//

#ifndef CPP_WEEK8_CONSTEXPR_HPP
#define CPP_WEEK8_CONSTEXPR_HPP
#include <iostream>
#include <vector>

namespace ConstExpr {
template <unsigned N> struct Fibonacci {
  const static int value = Fibonacci<N - 1>::value + Fibonacci<N - 2>::value;
};

template <> struct Fibonacci<1> { const static int value = 1; };

template <> struct Fibonacci<0> { const static int value = 0; };

constexpr unsigned int fibonacci(const unsigned int num);

unsigned int fibonacci2(const unsigned int num);

void ConstExprExample();


} // namespace ConstExpr

#endif // CPP_WEEK8_CONSTEXPR_HPP
