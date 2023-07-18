//
// Created by Morde on 7/19/2023.
//

#ifndef EXAM2022_SQUARE_H
#define EXAM2022_SQUARE_H
#include "Shape.h"

class Square: public Shape {
protected:
    double a;
public:
    Square();
    Square(Point p, double a);

    void show();

    double area();
};


#endif //EXAM2022_SQUARE_H
