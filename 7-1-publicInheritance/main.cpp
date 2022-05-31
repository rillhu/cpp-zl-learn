#include <iostream>
#include "rectangle.h"

int main() {
    Rectangle rect;
    rect.initRectangle(2, 3, 20, 10);
    rect.move(3, 2);
    std::cout << "The data of rect(x,y,w,h):" << std::endl;
    std::cout << rect.getX() << ","
              << rect.getY() << ","
              << rect.getW() << ","
              << rect.getH() << std::endl;

    return 0;
}
