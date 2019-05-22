#include <iostream>
#include "triangle.h"

double Triangle::getArea()
{
    return this->param*this->param2*0.5;
}

double Triangle::getCircumference()
{
    return 2 *  sqrt(pow(this->param/2.0,2) + pow(this->param2,2)) + static_cast<double>(this->param);
}

Triangle::~Triangle()
{
    cout << "Triangle destructor called" << endl;
}

