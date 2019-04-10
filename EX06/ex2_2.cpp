#include <iostream>
#include "ex2_2.h"

using namespace std;

void ex2_2()
{
    cout << "Output for snipped a: Base(), Derived() Base(), ~Base(), Derived(), ~Base()" << endl;
    cout << "Output for snipped b: Program doesn't compile because m_x is private" << endl;
    cout << "One could change m_x to protected, then the output would be:" << endl;
    cout << "Base(), Derived(), Dervide: 5, ~Derived(), ~Base()" << endl;
}