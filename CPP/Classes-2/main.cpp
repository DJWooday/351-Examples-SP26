#include <iostream>
#include "Sphere.h"
#include "Rectangle.h"
#include "Cube.h"
using namespace std;


int main() {
    Rectangle rect(3.5, 2.5);
    cout << rect.getArea() << endl;

    //Cube cube(rect, 7);
    Cube cube {};
    cout << cube.base.getArea() << endl;
    cout << cube.depth << endl;

    Circle c(8);
    cout << c.getArea() << endl;
    return 0;
}
