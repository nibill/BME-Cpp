/* Exercise 6 - ""
 *
 * @author Thomas Buchegger
 * @email thomas.bucheggeratstudents.unibe.ch
 * @created  05.04.2019 07:34
 *
 * University of Bern / Bern University of Applied Sciences
 * Course 394661-FS2019-0: C++ Programming I
 */

#include <iostream>
#include "checkingaccount.h"
#include "ex2_1.h"
#include "ex2_2.h"
#include "ex2_3.h"
#include "ex2_4.h"

using namespace std;

int main()
{
    int input;

    cout << "Choose the to be executed exercise:\n"; 
    cout << "1 - CheckingAccount exercise\n";
    cout << "2 - Code snippet questions\n";

    cin >> input;

    switch (input)
    {
        case 1:
            ex2_1();
            break;
    
        case 2:
            cout << "ex 2.2:" << endl;
            cout << "--------------------------------------" << endl;
            ex2_2();
            cout << endl;
            cout << "ex 2.3:" << endl;
            cout << "--------------------------------------" << endl;
            ex2_3::test();
            cout << endl;
            cout << "ex 2.4:" << endl;
            cout << "--------------------------------------" << endl;
            ex2_4::test();

            break;
    }

    return 0;
}