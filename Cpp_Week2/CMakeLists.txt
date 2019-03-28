cmake_minimum_required(VERSION 3.13)
project(CppStudy)

set(CMAKE_CXX_STANDARD 17)

add_executable(CppStudy main.cpp src/MyClass.cpp includes/MyClass.hpp src/Inheritance.cpp includes/Inheritance.hpp)