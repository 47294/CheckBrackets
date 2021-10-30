cmake_minimum_required(VERSION 3.1)

project(CheckLet)
add_library(CheckLet SHARED src/CheckBrackets.c)
add_executable(CheckLet.test tests/CheckBrackets.Test.cpp)
target_link_libraries(CheckLet.test CheckLet gtest gtest_main pthread)
