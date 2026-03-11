cmake_minimum_required(VERSION 4.0)
project(Classes_1)

set(CMAKE_CXX_STANDARD 20)

add_executable(Classes_1 main.cpp
        Circle.h
        Circle.cpp
        Sphere.cpp
        Sphere.h
        temp.cpp
        temp.h
        Rectangle.h
        Rectangle.cpp
        Cube.cpp
        Cube.h)
