cmake_minimum_required(VERSION 3.13)
project(TP7)

set(CMAKE_CXX_STANDARD 14)

include_directories(TP7)

add_executable(TP7
        TP7/FileHandling.cpp
        TP7/FileHandling.hpp
        TP7/Words.cpp
        TP7/Words.h
        # TP7/listing1.cpp
        TP7/main.cpp)
