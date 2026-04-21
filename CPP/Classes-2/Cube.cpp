//
// Created by DownT on 3/10/2026.
//

#include "Cube.h"
Cube::Cube(Rectangle *r, float d) : base(r), depth(d) {};
Cube::Cube() : depth(1) {
    base = new Rectangle;
}
Cube::Cube(const Cube& existing) {
    this->depth = existing.depth;
    this->base = new Rectangle(existing.base->width, existing.base->height);
}
Cube::~Cube() {
    delete this->base;
}
Cube &Cube::operator=(const Cube &rhs) {
    delete this->base;
    this->depth = rhs.depth;
    this->base = new Rectangle(rhs.base->width, rhs.base->height);
    return *this;
}



