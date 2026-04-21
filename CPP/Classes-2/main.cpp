#include <iostream>
#include "Sphere.h"
#include "Rectangle.h"
#include "Cube.h"
#include <fstream>
using namespace std;

class Line {
    float length;
public:
    explicit Line(float length) : length(length) {}

    Line operator+(const Line& rhs) {
        return Line(this->length - rhs.length);
    }
    friend Line operator-(const Line& lhs, const Line& rhs);
    friend ostream& operator<<(ostream& o, const Line& rhs);
};

ostream& operator<<(ostream& o, const Line& rhs) {
    o << "Line: " << rhs.length;
    return o;
}

Line operator-(const Line& lhs, const Line& rhs) {
    return Line(lhs.length - rhs.length);
}

int main() {
    int num, temp, sum=0;
    int counter = 0;
    ifstream fileIn("line.txt");
    if(!fileIn.fail()) {
        while (fileIn >> num) {
            sum += num;
            counter++;
        }
    }
    cout << sum << " after " << counter << " loops" << endl;
    fileIn.close();

    fstream stream;
    stream.open("line.txt", ios::app | ios::out);
    stream.close();

    cout << "Bits: " << (ios::out | ios::app) << endl;

    Line L1(4.5), L2(2.2);
    Line L3 = L1 + L1;
    Line L4 = L3 - (L2);
    cout << L4 << L3 << endl;

    // ofstream output;
    // output.open("..\\line.txt");
    // output << L1;
    // output.close();

    Rectangle rect(3.5, 2.5);
    cout << rect.getArea() << endl;

    //Cube cube(rect, 7);
    Cube cube {};
    cout << cube.base->getArea() << endl;
    cout << cube.depth << endl;

    Circle c(8);
    cout << c.getArea() << endl;
    return 0;
}
