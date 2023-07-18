//
// Created by Morde on 7/19/2023.
//

#include "Square.h"

Square::Square(Point p, double a):Shape(p) {
    this->a = a;

}

Square::Square():Shape() {
    this->a = 0;
}

void Square::show(){
    p.show();
    cout<<"The side is: "<<a;
    cout<<"The area is: "<<this->area();
}

double Square::area(){
    return a*a;
}