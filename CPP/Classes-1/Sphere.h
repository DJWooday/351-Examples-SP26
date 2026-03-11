#ifndef Sphere_H
#define Sphere_H
#include "Circle.h"
class Sphere {
    public:
    Circle* base;
    float extend;
    Sphere();
    Sphere(float e);
};
#endif
