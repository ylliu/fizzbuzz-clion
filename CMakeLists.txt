cmake_minimum_required(VERSION 3.20)
project(fizzbuzz_game2)

set(CMAKE_CXX_STANDARD 14)

add_executable(fizzbuzz_game2 main.cpp)
add_subdirectory(src)
add_subdirectory(test)
