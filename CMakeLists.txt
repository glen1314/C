cmake_minimum_required(VERSION 3.31)
project(C)

set(CMAKE_CXX_STANDARD 20)

add_executable(C main.cpp
        test.cpp
        test.h
        testC.c
        test2C.cpp
        test2C.h
        test3C.c)
