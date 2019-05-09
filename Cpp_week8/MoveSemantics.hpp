//
// Created by jwkim98 on 5/9/19.
//

#ifndef CPP_WEEK8_MOVESEMANTICS_HPP
#define CPP_WEEK8_MOVESEMANTICS_HPP

#include <vector>
#include <iostream>

namespace MoveSemantics
{
    struct Move {
        Move() = default;
        /// Copy constructor
        Move(Move &move) : m_vect(move.m_vect)
        {
            //std::cout<<"Haha"<<std::endl;
        }
        /// Move constructor
        Move(Move &&move) noexcept : m_vect(std::move(move.m_vect))
        {
            //std::cout<<"Hey!"<<std::endl;
        }
        std::vector<int> m_vect = std::vector<int>(0xFFFFFFF, 1);
    };

    void MoveSemanticsExample();
}

#endif //CPP_WEEK8_MOVESEMANTICS_HPP
