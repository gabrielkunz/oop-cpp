cmake_minimum_required(VERSION 3.19)
project(complex)

set(CMAKE_CXX_STANDARD 14)

add_executable(complex
        main.cpp Complex.cpp Complex.h ArrayComplex.cpp ArrayComplex.h)
