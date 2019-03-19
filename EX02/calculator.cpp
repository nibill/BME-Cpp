#include <iostream>
#include "calculator.h"

using namespace std;


int calculator(int val1, int val2)
{
    return val1 + val2;
}

void calc()
{
	int val1, val2;

	cout << "Input two values you'd like to sum up\n";
	cin >> val1 >> val2;

	int sum = calculator(val1, val2);

	cout << "The result is: " << sum;
}

