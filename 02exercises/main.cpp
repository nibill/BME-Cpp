#include <iostream>
#include <random>
#include <stack>
#include "calculator.h"
#include "functions.h"
#include "pi.h"

using namespace std;

int main()
{
	int input;

	cout << "Please choose how you'd like to proceed:\n";
	cout << "1 - Pass by value\n";
	cout << "2 - Pass by reference\n";
	cout << "3 - Default values\n";
	cout << "4 - Function overloading\n";
	cout << "5 - Calculate PI\n";
	cout << "6 - Setup RNG\n";
	cout << "7 - Throwing a Dart\n";
	cout << "8 - Throw multiple Darts\n";

	cin >> input;

	switch (input)
	{
	case 1:
		calc();
		break;
	case 2:
        byRef();
		break;
	case 3:
		defaultValues();
		break;
	case 4:
		printtype(input);
		break;
	case 5:
		overloading();
		break;
	case 6:
		rng();
		break;
	case 7:
        picalc(1);
		break;
	case 8:
        picalc(2);
		break;
	default:
		break;
	}
	
	return 0;
}
