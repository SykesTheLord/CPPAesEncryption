cmake_minimum_required(VERSION 3.29)
project(CPPHashCracker)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

set(CMAKE_CXX_STANDARD 23)

add_executable(CPPHashCracker main.cpp
        encryption.cpp
        encryption.h
        STRUCTURES_H.h)
