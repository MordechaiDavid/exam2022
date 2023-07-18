//
// Created by Morde on 7/19/2023.
//
#include "Shape.h"
#ifndef EXAM2022_CIRCLE_H
#define EXAM2022_CIRCLE_H


class Circle: public Shape {
private:
    double r;
public:
    Circle();
    Circle(Point p, double r);

    double getR() const;

    void setR(double r);

    void show();

    double area();
};


#endif //EXAM2022_CIRCLE_H
