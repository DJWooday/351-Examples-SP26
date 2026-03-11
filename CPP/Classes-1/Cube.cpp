//
// Created by DownT on 3/10/2026.
//

#include "Cube.h"

#include <iostream>
#include <ostream>

Cube::Cube(Rectangle *b, float d) : depth(d) {
}
Cube::~Cube() {
    delete this->base;
}
Cube::Cube(const Cube & existing) {
    this->base = existing.base;
}

