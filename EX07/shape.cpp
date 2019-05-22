#include <iostream>
#include "shape.h"

using namespace std;

void Shape::report()
{
    cout << this->type << " has area: " << this->getArea();
    cout << " and circumference: " << this->getCircumference() << endl;
}

Shape::~Shape()
{
    cout << "Shape destructor called" << endl;
}
