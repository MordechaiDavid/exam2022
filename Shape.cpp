//
// Created by Morde on 7/19/2023.
//

#include "Shape.h"

Shape::Shape(Point p) {
    int x = p.getX();
    int y = p.getY();
    this->p.setX(x);
    this->p.setY(y);
}

Shape::Shape() {
    p.setX(0);
    p.setY(0);
}

void Shape::show(){
    cout<<"dfdsf";
}
