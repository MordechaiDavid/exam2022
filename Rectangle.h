//
// Created by Morde on 7/19/2023.
//

#ifndef EXAM2022_RECTANGLE_H
#define EXAM2022_RECTANGLE_H
#include "Square.h"

class Rectangle: public Square{
private:
    double b;
public:
    Rectangle();
    Rectangle(Point p, double a, double b);

    void show();
};


#endif //EXAM2022_RECTANGLE_H
