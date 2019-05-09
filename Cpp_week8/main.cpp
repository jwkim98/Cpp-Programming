#include <iostream>
#include <utility>
#include "Lambda.hpp"
#include "Constexpr.hpp"
#include "MoveSemantics.hpp"

int main()
{
    //Lambda::FunctorExample();
    ConstExpr::ConstExprExample();
    MoveSemantics::MoveSemanticsExample();
    return 0;
}