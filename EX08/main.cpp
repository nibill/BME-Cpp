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
    cout << "Please choose what action you'd like to perform" << endl;
    cout << "1 - push to stack" << endl;
    cout << "2 - pop from stack" << endl;
    cout << "3 - peek stack" << endl;



    Stack s(10);

    s.push(20);
    s.push(10);
    s.pop();
    s.push(22);
    s.push(43);
    s.print();

//    int i = 0;
//    cin >> i;
//    int value = 0;
//    while(true)
//    {
//        if (i == 1)
//        {
//            cout << "Please enter a value:" << endl;
//            cin >> value;
//            s.push(value);
//        }
//        else if(i == 2)
//        {
//            s.pop();
//        }
//        else if(i == 3)
//        {
//            s.peek();
//        }
//        cin >> i;
//    }
    return 0;
}
