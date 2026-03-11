#include <iostream>
#include "Circle.h"
#include "Sphere.h"
#include "Rectangle.h"
#include "Cube.h"
using namespace std;

namespace NewMath {
    double pi = 6.7;
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    float f = NewMath::pi * 2;

    Rectangle rect(3.5f, 2.5f);
    Rectangle rect2;
    cout << rect.getArea() << endl;
    cout << rect2.getArea() << endl;

    int x(3);

    Cube cube{};
    cout << cube.depth << endl;

    //Sphere s;
    Circle c;
    int i;
    std::cout << i;
    return 0;
}