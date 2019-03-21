cmake_minimum_required(VERSION 3.10)
project(Cpp_Weak1)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY  ${CMAKE_CURRENT_SOURCE_DIR}/Build)

set(GLOB APP_SRC "Headers/*.cpp")
set(GLOB APP_HEADERS "Sources/*.hpp")

include_directories(Headers)
add_executable(Cpp_Weak1 Sources/main.cpp
        Headers/ExampleClass.hpp
        Headers/YourOwnClass.hpp
        Sources/ExampleClass.cpp
        Sources/YourOwnClass.cpp
        ${APP_SRC}
        ${APP_HEADERS})