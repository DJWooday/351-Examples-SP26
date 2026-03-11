#include "Circle.h"

float Circle::getArea() {
    return 2*3.14*radius;
}

Circle::Circle() {
    radius = 0;
}

Circle::Circle(float r) {
     radius = r;
 }

