//
// Created by jwkim98 on 5/9/19.
//

#include "MoveSemantics.hpp"

#include <chrono>
#include <iostream>

namespace MoveSemantics {

    template<typename T>
    void forwardingReference(T&& to_forward)
    {
        Move move(std::forward<Move>(to_forward));
    }

void MoveSemanticsExample() {
  Move move1;
  auto time1 = std::chrono::steady_clock::now();
  //Move move2(move1);
  auto time2 = std::chrono::steady_clock::now();
  //Move move3(std::move(move1));
  auto time3 = std::chrono::steady_clock::now();

  Move to_forward1;
  auto time4 = std::chrono::steady_clock::now();
  forwardingReference(to_forward1);
  auto time5 = std::chrono::steady_clock::now();
  forwardingReference(std::move(to_forward1));
  auto time6 = std::chrono::steady_clock::now();


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

    std::cout << "Without move semantics : "
              << std::chrono::duration_cast<std::chrono::nanoseconds>(time5 -
                      time4)
                      .count()
              << std::endl;
    std::cout << "With move semantics : "
              << std::chrono::duration_cast<std::chrono::nanoseconds>(time6 -
                      time5)
                      .count()
              << std::endl;


}

} // namespace MoveSemantics