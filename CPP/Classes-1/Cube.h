//
// Created by DownT on 3/10/2026.
//

#ifndef CLASSES_1_CUBE_H
#define CLASSES_1_CUBE_H
#include "Rectangle.h"


class Cube {
public:
    Rectangle* base;
    float depth;
    Cube(Rectangle* b, float d);
    ~Cube();
    Cube(const Cube&);
};


#endif //CLASSES_1_CUBE_H