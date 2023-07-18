//
// Created by Morde on 7/19/2023.
//

#ifndef EXAM2022_POINT_H
#define EXAM2022_POINT_H


class Point {
private:
    int x;
    int y;

public:
    Point();
    Point(int x, int y);

    int getX() const;

    void setX(int x);

    int getY() const;

    void setY(int y);

    void show();
};





#endif //EXAM2022_POINT_H
