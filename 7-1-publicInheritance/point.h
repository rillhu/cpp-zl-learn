//
// Created by Hongfei on 2022/5/30.
//

#ifndef INHERITANCE_POINT_H
#define INHERITANCE_POINT_H

class Point {
public:
    void initPoint(float x = 0, float y = 0) {
        this->x = x;
        this->y = y;
    }

    void move(float x_off, float y_off) {
        x += x_off;
        y += y_off;
    }

    float getX() const {
        return x;
    }

    float getY() const {
        return y;
    }

private:
    float x;
    float y;
};

#endif //INHERITANCE_POINT_H
