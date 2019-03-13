#include <iostream>     // provides output to stdout with cout
#include <cmath>        // declares a set of functions to compute common mathematical operations and transformations
#include <iomanip>      // providing parametric manipulators
#include "fibonacci.h"  // for function fibonacci (...)

int main ()
{
	using namespace std;

    int f = 1;
    int fprev = 0;
	double ratio = 1;
	double const dev_template = 1.61803399;

	cout << fprev << endl;

	do {
		cout << f << "\t\t Ratio: " << fixed << setprecision(17) << ratio << " - Dev[%]: " << (ratio - dev_template) / dev_template * -100 << endl;
		int tmp = fibonacci(f, fprev);
		ratio = goldenRatio(f, fprev);
		fprev = f;
		f = tmp;

	} while (fprev <= f);
	cout << endl;
	cout << "Max int value: " << numeric_limits<int>::max() << endl;
}

