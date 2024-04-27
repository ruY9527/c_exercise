cmake_minimum_required(VERSION 3.26)
project(c_base C)

set(CMAKE_C_STANDARD 11)

add_library(c_base library.c
        operator.c
        operator.h
)
