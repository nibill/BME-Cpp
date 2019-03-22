/* Exercise 3
 *
 * @author Thomas Buchegger
 * @email thomas.buchegger@students.unibe.ch
 * @created  20.03.2019 18:59
 *
 * University of Bern / Bern University of Applied Sciences
 * Course 394661-FS2019-0: C++ Programming I
 */

#include <iostream>
#include "ex3_2_1.h"
#include "ex3_2_2.h"

using namespace std;

int main()
{
    int input;

    cout << "Please choose the exercise:\n";
    cout << "1 - Ex. 1\n";
    cout << "2 - Ex. 2\n";

    cin >> input;

    switch (input)
        {
        case 1:
            ex3_2_1();
            break;
        case 2:
            ex3_2_2();
            break;
        default:
            break;
    }

    return 0;
}
