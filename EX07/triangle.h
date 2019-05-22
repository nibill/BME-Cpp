#include "shape.h"

#ifndef TRIANGLE_H
#define TRIANGLE_H


class Triangle final : public Shape
{
private:
    int param,param2;
public:
    Triangle(int param, int param2) : Shape("Triangle"), param(param), param2(param2) {}
    ~Triangle();
    double getArea();
    double getCircumference();
};

#endif // TRIANGLE_H
