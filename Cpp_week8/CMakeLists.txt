cmake_minimum_required(VERSION 3.14)
project(Cpp_week8)

set(CMAKE_CXX_STANDARD 17)

file(GLOB sources
        ${CMAKE_CURRENT_SOURCE_DIR}/*.cpp)

add_executable(Cpp_week8 ${sources})