#include "shape.h"

#ifndef CIRCLE_H
#define CIRCLE_H

class Circle : public Shape
{
private:
    int param;
public:
    Circle(int param) : Shape("Circle"), param(param) {}
    ~Circle();
    double getArea();
    double getCircumference();
};

#endif // CIRCLE_H
