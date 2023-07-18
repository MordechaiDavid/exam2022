#include <iostream>
#include "Shape.h"
#include "Circle.h"
#include "Square.h"
#include "Rectangle.h"

int main() {

    Shape** arr = new Shape*[3];
    arr[0] = new Circle();
    arr[1] = new Square(Point(1,2), 4);
    arr[2] = new Rectangle(Point(3,3), 3,5);

    for (int i = 0; i < 3; ++i) {
        arr[i]->show();
        cout<<endl;
    }



    return 0;
}
