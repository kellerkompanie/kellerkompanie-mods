cmake_minimum_required(VERSION 3.12)
project(calculator)

set(CMAKE_CXX_STANDARD 11)

add_library(calculator SHARED library.cpp)
set_target_properties(calculator PROPERTIES COMPILE_FLAGS "-m32" LINK_FLAGS "-m32")