#include <iostream>
#include "Circle.h"
#include "Sphere.h"
#include "Rectangle.h"
#include "Cube.h"
#include <fstream>
using namespace std;

namespace NewMath {
    double pi = 6.7;
}

class Line {
    float length;
public:
    Line(float l) : length(l) {}

    Line operator-(const Line& line) {
        return Line(length - line.length);
    }
    friend Line operator+(const Line&, const Line&);
    friend ostream& operator<<(ostream&, const Line&);
};

Line operator+(const Line& l1, const Line& l2) {
    return Line(l1.length + l2.length);
}
ostream& operator<<(ostream& os, const Line& l) {
    os << l.length;
}

int main() {
    // Line l(4);
    // ofstream output;
    // output.open("..\\line.txt");
    // output << 6 << endl;
    // output.close();

    int num, sum=0;
    int count=0;
    ifstream fileIn("line.txt");
    if (!fileIn.fail()) {
        while (fileIn >> num) {
            sum+=num;
            count++;
        }
        cout << sum << " with count " << count << endl;
    }
    // fileIn.close();
    // fstream appends;
    // appends.open("sums.txt", ios::out | ios::app);
    // appends << sum << " ";
    // appends.close();

    cout << (ios::app | ios::out) << endl;

    Line l1(4.5), l2(2.2);
    Line l3 = l1 - (l2);
    Line l4 = l3 + 4;
    cout << l4 << endl;
    float f = NewMath::pi * 2;

    Rectangle rect(3.5f, 2.5f);
    Rectangle rect2;
    cout << rect.getArea() << endl;
    cout << rect2.getArea() << endl;

    int x(3);

    Cube c1(&rect, 5);
    Cube c2;
    c2 = c1;


    //Sphere s;
    Circle c;
    int i;
    std::cout << i;
    return 0;
}