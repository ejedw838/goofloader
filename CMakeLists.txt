cmake_minimum_required(VERSION 3.26)
project(Clion_tests)

set(CMAKE_CXX_STANDARD 20)

add_executable(Clion_tests main.cpp
        backend.h
)
