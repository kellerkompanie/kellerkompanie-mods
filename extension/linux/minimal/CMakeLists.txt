cmake_minimum_required(VERSION 3.12)
project(minimal)

set(CMAKE_CXX_STANDARD 11)

add_library(minimal SHARED library.cpp library.h)