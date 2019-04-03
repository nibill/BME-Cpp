#include <iostream>
#include "ex3_2_2.h"

using namespace std;

void ex3_2_2()
{
    ex3_2_2_a();
    ex3_2_2_b();
    ex3_2_2_c(168);
    ex3_2_2_d();
}

int ex3_2_2_a()
{
    cout << endl;
    cout << endl;
    cout << "exA" << endl;
    cout << "Wrong line: \t pointToAnInt = 9" << endl;
    cout << "Correct: \t *pointToAnInt = 9" << endl;
    cout << "Need to dereference!" << endl;
    cout << endl;

    int *pointToAnInt = new int;
    *pointToAnInt = 9;
    cout << "The value at pointToAnInt : " << * pointToAnInt << endl;
    delete pointToAnInt;
    return 0;
}

int ex3_2_2_b()
{
    cout << endl;
    cout << endl;
    cout << "exB" << endl;
    cout << "Wrong line: \t int pointToAnInt = new int" << endl;
    cout << "Correct: \t int *pointToAnInt = new int" << endl;
    cout << "New returning a pointer!" << endl;
    cout << endl;

    int *pointToAnInt = new int;
    int *pNumberCopy = pointToAnInt ;
    *pNumberCopy = 30;
    cout << "*pointToAnInt: " << *pointToAnInt << endl;
    delete pNumberCopy;
    delete pointToAnInt;
    return 0;
}

int* ex3_2_2_c(const int length)
{
    cout << endl;
    cout << endl;
    cout << "exC" << endl;
    cout << "Wrong line: \t int temp[length]" << endl;
    cout << "Correct: \t int* temp = new int[static_cast<unsigned long>(length)]" << endl;
    cout << "Need to be a pointer to an array, would be inaccessible if the scope is closed!" << endl;
    cout << endl;

    int* temp = new int[static_cast<unsigned long>(length)];
    return temp;
}

int ex3_2_2_d()
{
    cout << endl;
    cout << endl;
    cout << "exD" << endl;
    cout << "Wrong line: \t int array[5] { 0, 1, 2, 3 }" << endl;
    cout << "Correct: \t int array[5] { 0, 1, 2, 3, 4 }" << endl;
    cout << "Array of 5 needs 5 values!" << endl;
    cout << "The array has 5 and not 6 values. Counter starts at 0!" << endl;
    cout << endl;

    int array[5] { 0, 1, 2, 3, 4 };
    for(int count = 0; count < 5; ++count)
        cout << array[count] << " ";

    return 0;
}
