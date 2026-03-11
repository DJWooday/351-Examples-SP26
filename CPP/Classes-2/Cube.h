//
// Created by DownT on 3/10/2026.
//

#ifndef CLASSES_2_CUBE_H
#define CLASSES_2_CUBE_H
#include "Rectangle.h"


class Cube {
    public:
    Rectangle* base;
    float depth;
    Cube(Rectangle* r, float d);
    Cube();
    ~Cube();
    Cube(const Cube& existing);
};


#endif //CLASSES_2_CUBE_H