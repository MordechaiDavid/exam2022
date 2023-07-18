//
// Created by Morde on 7/19/2023.
//

#include "Rectangle.h"

Rectangle::Rectangle(Point p, double a, double b):Square(p, a){
    this->b = b;
}

Rectangle::Rectangle():Square() {
    this->b = 0;
}

void Rectangle::show(){
    p.show();
    cout<<"slide a: "<<a<<"slide b: "<<b<<endl;
    cout<<"The area is: "<<a*b<<endl;

}

