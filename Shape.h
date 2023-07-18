//
// Created by Morde on 7/19/2023.
//
#include "Point.h"
#include <iostream>
#ifndef EXAM2022_SHAPE_H
#define EXAM2022_SHAPE_H
using namespace std;

class Shape {
protected:
    Point p;
public:
    Shape();
    Shape(Point p);

    virtual void show();
};


#endif //EXAM2022_SHAPE_H
