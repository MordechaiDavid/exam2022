//
// Created by Morde on 7/19/2023.
//
#include <iostream>
#include "Point.h"
using namespace std;

Point::Point() {
    x=0;
    y=0;
}

Point::Point(int x, int y) {
    this->x = x;
    this->y = y;
}

int Point::getX() const {
    return x;
}

void Point::setX(int x) {
    Point::x = x;
}

int Point::getY() const {
    return y;
}

void Point::setY(int y) {
    Point::y = y;
}

void Point::show(){
    cout<<"<"<<x<<">"<<","<<"<"<<y<<">"<<endl;
}
