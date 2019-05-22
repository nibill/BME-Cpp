/* Exercise 08 - "Array Stack"
 *
 * @author Thomas Buchegger
 * @email thomas.buchegger@students.unibe.ch
 * @created  13.05.2019 18:28
 *
 * University of Bern / Bern University of Applied Sciences
 * Course 394661-FS2019-0: C++ Programming I
 */

#include <iostream>
#include "stack.h"

using namespace std;

int main()
{
    cout << "-----------------------string-----------------------" << endl;
    string alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    Stack<string, 10> string_stack;
    for (unsigned long i = 3; i < 13; ++i)
    {
        string_stack.push(alphabet.substr(i-3,3));
    }
    string_stack.peek();
    string_stack.pop();
    string_stack.peek();
    string_stack.print();
    cout << endl;

    cout << "------------------------int--------------------------" << endl;
    Stack<int, 10> int_stack;
    for (unsigned long i = 0; i < 10; ++i)
    {
        int_stack.push(static_cast<int>(i));
    }
    int_stack.peek();
    int_stack.pop();
    int_stack.peek();
    int_stack.print();
    cout << endl;

    cout << "------------------------double-----------------------" << endl;
    Stack<double, 10> double_stack;
    for (unsigned long i = 0; i < 3; ++i)
    {
        double f = (double)rand() / RAND_MAX;

        double_stack.push(static_cast<double>(f));
    }
    double_stack.peek();
    double_stack.pop();
    double_stack.pop();
    double_stack.pop();
    double_stack.pop();
    double_stack.peek();
    double_stack.print();

    return 0;
}

