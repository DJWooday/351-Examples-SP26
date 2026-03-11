//
// Created by DownT on 3/10/2026.
//
#include "Rectangle.h"

Rectangle::Rectangle(float w, float h) {
    width = w; height = h;
}
Rectangle::Rectangle() {
    width = 1; height = 1;
}

float Rectangle::getArea() {
    return width * height;
}
