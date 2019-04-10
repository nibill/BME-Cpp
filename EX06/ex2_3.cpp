#include <iostream>
#include "ex2_3.h"

using namespace std;

void ex2_3::test()
{
    cout << "General order is: Base(), Derived(), ~Derived(), ~Base()" << endl;
    cout << "---------------------------------------------------------------" << endl;
    cout << "create ABC in stack" << endl;
    ABC test;
    cout << "create ABC in heap" << endl;
    ABC *testpointer = new ABC();
    cout << "delete ABC in heap" << endl;
    delete testpointer;
    cout << "leave test()" << endl;
}
