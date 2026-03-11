#include "Circle.h"

float Circle::getArea() {
    return 3.14 * radius * radius;
}
Circle::Circle(float r) {
    radius = r;
}
