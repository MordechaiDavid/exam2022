//
// Created by Morde on 7/19/2023.
//

#include "Circle.h"
#include "Shape.h"
#include <iostream>
using namespace std;

Circle::Circle():Shape() {
    this->r = 0;
}

Circle::Circle(Point p, double r):Shape(p) {
    this->r = r;
}

void Circle::show(){
    p.show();
    cout<<"Radius: "<<r<<endl;
    cout<<"The area is: "<<this->area();
}

double Circle::area(){
    const double pi = 3.14159265358979323846;
    return pi * r * r;
}

double Circle::getR() const {
    return r;
}

void Circle::setR(double r) {
    Circle::r = r;
}
