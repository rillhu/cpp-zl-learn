//
// Created by Hongfei on 2022/5/30.
//

#ifndef INHERITANCE_RECTANGLE_H
#define INHERITANCE_RECTANGLE_H

#include "point.h"

class Rectangle : public Point {
public:
    void initRectangle(float x, float y, float w, float h) {
        initPoint(x, y);
        this->w = w;
        this->h = h;
    }

    float getH() const {
        return h;
    }

    float getW() const {
        return w;
    }

private:
    float w;
    float h;
};

#endif //INHERITANCE_RECTANGLE_H
