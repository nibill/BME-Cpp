#include <iostream>
#include <memory>
#include "ex3_2_1.h"

using namespace std;

void ex3_2_1()
{
    unsigned long arraySize{0};

    cout << "How many values do you want to enter?: ";
    cin >> arraySize;

    unique_ptr<int[]> smartPtr(new int [arraySize]);

    for (unsigned long i = 0;i<arraySize;i++)
    {
        cout << i << ".\tvalue: ";
        cin >> smartPtr[i];
    }

    cout << "--------------" << endl;

    int sum{0}, min{0}, max{0};
    min = arraySize > 0 ? smartPtr[0] : 0;
    max = arraySize > 0 ? smartPtr[0] : 0;

    for (unsigned long i = 0;i<arraySize;i++)
    {
        sum += smartPtr[i];
        min = min > smartPtr[i] ? smartPtr[i] : min;
        max = max < smartPtr[i] ? smartPtr[i] : max;
    }


    cout << endl << "Results:" << endl;
    cout << "Sum: \t" << sum << endl;
    cout << "Min: \t" << min << endl;
    cout << "Max: \t" << max << endl;
}
