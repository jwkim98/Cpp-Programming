#include "Includes/Sfinae.hpp"
#include "Includes/Topological_sort.hpp"
#include <iostream>

template <typename T> auto constexpr sum(T first) { return first; }

template <typename T, typename... Rest> auto constexpr sum(T first, Rest... rest) {
  return first + sum(rest...);
}

template <typename... Args> auto constexpr sum2(Args... args) { return (args + ... + 0); }

int main() {

  //auto serialize = hasSerialize;

  auto adjMatrix = AdjMatrix<int, 10>();
  adjMatrix.initialize<0,0,1,2,1,3,2,6,3,5,6,8,0>();
  int zero = adjMatrix.get(0,0);

  std::cout<<"zero: " << zero<<std::endl;

  auto fooObj = foo();

  some_type<float> a(0.0);
  some_type<foo> b(fooObj);

  func(1.0);
  constexpr int fac2 = factorial2(10);

  constexpr int sum_result1 = sum(1, 2, 3, 4, 5, 6);
  constexpr int sum_result2 = sum2(1, 2, 3);

  std::cout << "Factorial: " << factorial<5>().num << std::endl;
  std::cout << "Factorial2: " << fac2 << std::endl;
  std::cout << "Factorial3: " << factorial3<5>() << std::endl;
  std::cout << "sum1 : " << sum_result1 << std::endl;
  std::cout << "sum2 : " << sum_result2 << std::endl;

  return 0;
}