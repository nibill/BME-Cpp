#include <iostream>
#include "square.h"

using namespace std;

double Square::getArea()
{
    return this->param*this->param;
}

double Square::getCircumference()
{
    return this->param*4;
}

Square::~Square()
{
    cout << "Square destructor called" << endl;
}
