//
// Created by DownT on 3/10/2026.
//

#ifndef CLASSES_1_RECTANGLE_H
#define CLASSES_1_RECTANGLE_H

class Rectangle {
public:
    float width, height;
    Rectangle();
    Rectangle(float, float);
    void setVals(float w, float h) {
        width = w; height = h;
    }
    float getArea();
};

#endif //CLASSES_1_RECTANGLE_H