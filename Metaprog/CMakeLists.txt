cmake_minimum_required(VERSION 3.13)
project(Metaprog)

set(CMAKE_CXX_STANDARD 17)

add_executable(Metaprog main.cpp Includes/Sfinae.hpp Includes/TypeExamine.hpp Includes/Topological_sort.hpp)