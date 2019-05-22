#include <math.h>
#include <iostream>
#include "circle.h"

using namespace std;

double Circle::getArea()
{
    return this->param*param*3.1415;
}

double Circle::getCircumference()
{
    return this->param*2*3.1415;
}

Circle::~Circle()
{
    cout << "Circle destructor called" << endl;
}
