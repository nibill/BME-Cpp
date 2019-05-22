#include "shape.h"

#ifndef SQUARE_H
#define SQUARE_H



class Square : public Shape
{
private:
    int param;
public:
    Square(int param) : Shape("Square"), param(param) {}
    ~Square();
    double getArea();
    double getCircumference();
};

#endif // SQUARE_H
