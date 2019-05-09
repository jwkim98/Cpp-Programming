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

struct Move {
  Move() = default;
  /// Copy constructor
  explicit Move(const Move &move) : m_vect(move.m_vect) {}
  /// Move constructor
  Move(Move &&move) noexcept : m_vect(std::move(move.m_vect)) {}
  std::vector<int> m_vect = std::vector<int>(0xFFFFFF, 1);
};

} // namespace ConstExpr

#endif // CPP_WEEK8_CONSTEXPR_HPP
