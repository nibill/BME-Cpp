#include "fibonacci.h"

/*
 *
 * */
int fibonacci(int first, int second)
{
    return first+second;
}

/*
 *
 * */
double goldenRatio(int first, int second)
{
	int prev = first - second;
	double result = static_cast<double>(fibonacci(first, second)) / static_cast<double>(fibonacci(second, prev));

	return result;
}
