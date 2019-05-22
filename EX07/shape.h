#include <string>

#ifndef SHAPE_H
#define SHAPE_H

using namespace std;

class Shape
{
private:
    string type;
public:
    Shape(string type) : type(type) {}
    virtual ~Shape();
    virtual double getArea() = 0;
    virtual double getCircumference() = 0;
    void report();
};

#endif // SHAPE_H
