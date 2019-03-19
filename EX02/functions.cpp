#include <iostream>
#include <random>
#include <string>
#include <sstream>
#include <typeinfo> 
#include "functions.h"

using namespace std;

void rng()
{
	random_device rd;
	mt19937 mt(rd());

	uniform_real_distribution<double> dist(0.0, 1.0);

	for (int i = 0; i < 10; i++)
	{
		cout << dist(mt) << "\n";
	}
}

void addNumbers(int a , int b, int c, int d)
{
	int result = a + b + c + d;

	cout << "The result is: " + to_string(result) << endl;
}

void defaultValues()
{
	cout << "With zero parameters:" << endl;
	addNumbers();

	cout << "With one parameter:" << endl;
	addNumbers(1);

	cout << "With two parameters:" << endl;
	addNumbers(1, 2);

	cout << "With three parameters:" << endl;
	addNumbers(1, 2, 3);

	cout << "With four parameters:" << endl;
	addNumbers(1, 2, 3, 4);
}

void overloading()
{
	int a = 5;
	float b = 5.5;
    string c = "abcdefghijklmnopqrstuvwxyz";

	printtype(a);
	printtype(b);
	printtype(c);
}

void printtype(int var) 
{
	cout << to_string(var) + " is of type: " << typeid(var).name() << endl;
}

void printtype(float var) 
{
	cout << to_string(var) + " is of type: " << typeid(var).name() << endl;
}

void printtype(string const& var)
{
	cout << var + " is of type: " << typeid(var).name() << endl;
}

void doubleNumber(int& num)
{
    num = num * 2;
}

void byRef()
{
    int num = 35;
    doubleNumber(num);

    cout << "Pass by reference output: " << num << endl;
}
