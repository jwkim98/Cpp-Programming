//
// Created by jwkim98 on 5/9/19.
//

#include "Constexpr.hpp"
#include <chrono>
#include <iostream>

namespace ConstExpr {

constexpr unsigned int fibonacci(const unsigned int num) {

  if (num == 0)
    return 0;
  else if (num == 1)
    return 1;
  return fibonacci(num - 1) + fibonacci(num - 2);
};

unsigned int fibonacci2(const unsigned int num) {

  if (num == 0)
    return 0;
  else if (num == 1)
    return 1;
  return fibonacci(num - 1) + fibonacci(num - 2);
};

void ConstExprExample() {

  auto before_result1 = std::chrono::steady_clock::now();
  int result1 = Fibonacci<25>::value;
  auto after_result1 = std::chrono::steady_clock::now();

  auto before_result2 = std::chrono::steady_clock::now();
  constexpr unsigned int result2 = fibonacci(25);
  auto after_result2 = std::chrono::steady_clock::now();

  auto before_result3 = std::chrono::steady_clock::now();
  int result3 = fibonacci2(25);
  auto after_result3 = std::chrono::steady_clock::now();

  std::cout << "result1: " << result1 << " elapsed_time: "
            << std::chrono::duration_cast<std::chrono::microseconds>(
                   after_result1 - before_result1)
                   .count()
            << std::endl;
  std::cout << "result2: " << result2 << " elapsed_time: "
            << std::chrono::duration_cast<std::chrono::microseconds>(
                   after_result2 - before_result2)
                   .count()
            << std::endl;
  std::cout << "result3: " << result3 << " elapsed_time: "
            << std::chrono::duration_cast<std::chrono::microseconds>(
                   after_result3 - before_result3)
                   .count()
            << std::endl;

  Move move1;
  auto time1 = std::chrono::steady_clock::now();
  Move move2(move1);
  auto time2 = std::chrono::steady_clock::now();
  Move move3(std::move(move1));
  auto time3 = std::chrono::steady_clock::now();

  std::cout << "Without move semantics : "
            << std::chrono::duration_cast<std::chrono::nanoseconds>(time2 -
                                                                     time1)
                   .count()
            << std::endl;
  std::cout << "With move semantics : "
            << std::chrono::duration_cast<std::chrono::nanoseconds>(time3 -
                                                                     time2)
                   .count()
            << std::endl;
}

} // namespace ConstExpr
