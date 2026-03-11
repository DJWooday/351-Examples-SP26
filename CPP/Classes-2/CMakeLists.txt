cmake_minimum_required(VERSION 4.0)
project(Classes_2)

set(CMAKE_CXX_STANDARD 20)

add_executable(Classes_2 main.cpp
        Circle.h
        Circle.cpp
        Sphere.cpp
        Sphere.h
        Rectangle.h
        Rectangle.cpp
        Cube.cpp
        Cube.h)
