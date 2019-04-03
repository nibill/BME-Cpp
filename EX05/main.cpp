/* Exercise 05 - ""
 *
 * @author Thomas Buchegger
 * @email thomas.buchegger@students.unibe.ch
 * @created  02.04.2019 08:14
 *
 * University of Bern / Bern University of Applied Sciences
 * Course 394661-FS2019-0: C++ Programming I
 */

#include <iostream>
#include "vector.h"

using namespace std;

int main()
{
    cout << "*****************************" << endl;
    cout << "******** VECTOR TEST ********" << endl;
    cout << "*****************************\n" << endl;

    // 1) Initialisation
    Vector v1; // empty vector
    Vector v2(100); // vector with 100 elements initialised to 0!
    Vector v3(100,42); // vector with 100 elements initialised to 42!

    cout << "v1 has size " << v1.size() << endl;
    cout << "v2 has size " << v2.size() << endl;
    cout << "v3 has size " << v3.size() << "\n" << endl;

    // 2) Element access
    cout << "v1 contains value: " << v1.at(0) << endl; // --> warning!
    cout << "v2 contains value: " << v2.at(0) << endl;
    cout << "v3 contains value: " << v3.at(0) << "\n" << endl;
    cout << "v3 contains value: " << v3.at(142) << "\n" << endl; // --> warning!

    // 3) Add Element
    v1.push_back(1);
    v1.push_back(2);
    v1.push_back(3);
    v1.push_back(4);
    v1.push_back(5);

    cout << "\n" << "v1 has size " << v1.size() <<  " and containes: " <<  endl;
    for (int i = 0; i < v1.size(); ++i)
    {
        cout << i << ": " << v1.at(i) << endl;
    }

    // 4) Remove Element
    v1.pop_back();
    v1.pop_back();

    cout << "\n" << "v1 has size " << v1.size() <<  " and containes: " <<  endl;
    for (int i = 0; i < v1.size(); ++i)
    {
        cout << i << ": " << v1.at(i) << endl;
    }

    // 4) Clear Elements
    v1.clear();
    cout << "\n" << "\n" << "v1 has size " << v1.size() <<  endl;

    // 5) Chech Copy Constructor
    Vector vCopy(v3);
    cout << "vCopy has size " << vCopy.size() << "\n" << endl;
    cout << "vCopy contains value: " << vCopy.at(0) << "\n" << endl;

    // 6) Check Move Constructor
    Vector vMove = move(v3);
    cout << "vMove has size " << vMove.size() << "\n" << endl;
    cout << "vMove contains value: " << vMove.at(0) << "\n" << endl;

    cout << "v3 has size " << v3.size() << "\n" << endl;

    cout << "*****************************" << endl;
    cout << "**** VECTOR TEST PASSED *****" << endl;
    cout << "*****************************" << endl;
    return 0;
}
