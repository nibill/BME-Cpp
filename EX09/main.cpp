/* Exercise 09 - "SharedPtr"
 *
 * @author Thomas Buchegger
 * @email thomas.buchegger@students.unibe.ch
 * @created  22.05.2019 14:27
 *
 * University of Bern / Bern University of Applied Sciences
 * Course 394661-FS2019-0: C++ Programming I
 */

#include <iostream>
#include "uniqueptr.h"
#include "sharedptr.h"

using namespace std;

UniquePtr<double> checkMove(UniquePtr<double> UP)
{
    *UP += 1;
    return UP;
}

UniquePtr<double[]> checkMove(UniquePtr<double[]> UP)
{
    *UP += 1;
    return UP;
}

int main()
{
    std::cout << "///////////////////////////////////////////////////////////////" << std::endl;
    std::cout << "///               BME - C++ I - EXERCISE 9                  ///" << std::endl;
    std::cout << "///////////////////////////////////////////////////////////////" << std::endl;
    std::cout << std::endl;
    std::cout << "-------------------------with variables------------------------" << std::endl;
    {
        std::cout << "*** Test Unique Pointer ***" << endl << endl;
        UniquePtr<double> up1(new double(3.1415));
        std::cout << "Value of up1: " << *up1 << endl << endl;

        {   // Create scope to check move-assign
            UniquePtr<double> up2(new double(23));
            std::cout << "Value of up2: " << *up2 << endl << endl;
            up1 = std::move(up2);
        }
        std::cout << "Value of up1 after move: " << *up1 << endl << endl;
        UniquePtr<double> up2 = checkMove(std::move(up1));
        std::cout << "Value of up1 after check move: " << *up2 << endl << endl;


        std::cout << "*** Test SharedPointer ***" << endl << endl;

        SharedPtr<int> sp1;
        std::cout << "UseCount of sp1: " << sp1.useCount() << endl << endl;

        SharedPtr<int> sp2(new int(42));
        std::cout << "UseCount of sp2: " << sp2.useCount() << endl;
        std::cout << "Value of sp2 is: " << *sp2 << endl << endl;

        {  // Create scope to check copy constructor
            SharedPtr<int> sp3(sp2);
            std::cout << "UseCount after copy: sp2: " << sp2.useCount() << " sp3: " << sp3.useCount() << endl;
            std::cout << "Values after copy: sp2: " << *sp2 << " sp3: " << *sp3 << endl << endl;

        }
        std::cout << "UseCount of sp2: " << sp2.useCount() << endl << endl;

        {   // Create scope to check assignment operator call
            sp1 = sp2;
            std::cout << "UseCount after copy assign: sp2: " << sp2.useCount() << " sp1: " << sp1.useCount() << endl;
            std::cout << "Values after copy assign: sp2: " << *sp2 << " sp1: " << *sp1 << endl << endl;
        }

        sp1.reset();
        sp2.reset();
        std::cout << "UseCount of sp1: " << sp2.useCount() << endl;
        std::cout << "UseCount of sp2: " << sp2.useCount() << endl;
    }
    std::cout << "-------------------------with arrays---------------------------" << std::endl;
    {
        std::cout << "*** Test Unique Pointer ***" << endl << endl;
        UniquePtr<double[]> up1(new double[10]);
        for (unsigned long i = 0;i < 10; i++) *(up1.operator->()+i) = static_cast<double>(i);
        std::cout << "Value of up1: ";
        for (unsigned long i = 0;i < 10; i++) std::cout << *(up1.operator->()+i) << " ";
        std::cout << endl << endl;

        {   // Create scope to check move-assign
            UniquePtr<double[]> up2(new double[10]);
            for (unsigned long i = 0;i < 10; i++) *(up2.operator->()+i) = static_cast<double>(i);
            std::cout << "Value of up2: ";
            for (unsigned long i = 0;i < 10; i++) std::cout << *(up2.operator->()+i) << " ";
            std::cout << endl << endl;
            up1 = std::move(up2);
        }
        std::cout << "Value of up1 after move: " ;
        for (unsigned long i = 0;i < 10; i++) std::cout << *(up1.operator->()+i) << " ";
        std::cout << endl << endl;
        UniquePtr<double[]> up2 = checkMove(std::move(up1));
        std::cout << "Value of up1 after check move: " ;
        for (unsigned long i = 0;i < 10; i++) std::cout << *(up2.operator->()+i) << " ";
        std::cout << endl << endl;

        std::cout << "*** Test SharedPointer ***" << endl << endl;

        SharedPtr<int[]> sp1;
        std::cout << "UseCount of sp1: " << sp1.useCount() << endl << endl;

        SharedPtr<int[]> sp2(new int[10]);
        for (unsigned long i = 0;i < 10; i++) *(sp2.operator->()+i) = static_cast<int>(i);
        std::cout << "UseCount of sp2: " << sp2.useCount() << endl;
        std::cout << "Value of sp2 is: ";
        for (unsigned long i = 0;i < 10; i++) std::cout << *(sp2.operator->()+i) << " ";
        std::cout << endl << endl;

        {  // Create scope to check copy constructor
            SharedPtr<int[]> sp3(sp2);
            std::cout << "UseCount after copy: sp2: " << sp2.useCount() << " sp3: " << sp3.useCount() << endl;
            std::cout << "Values after copy: sp2: " ;
            for (unsigned long i = 0;i < 10; i++) std::cout << *(sp2.operator->()+i) << " ";
            std::cout << " sp3: ";
            for (unsigned long i = 0;i < 10; i++) std::cout << *(sp3.operator->()+i) << " ";
            std::cout << endl << endl;

        }
        std::cout << "UseCount of sp2: " << sp2.useCount() << endl << endl;

        {   // Create scope to check assignment operator call
            sp1 = sp2;
            std::cout << "UseCount after copy assign: sp2: " << sp2.useCount() << " sp1: " << sp1.useCount() << endl;
            std::cout << "Values after copy assign: sp2: " ;
            for (unsigned long i = 0;i < 10; i++) std::cout << *(sp2.operator->()+i) << " ";
            std::cout << " sp3: ";
            for (unsigned long i = 0;i < 10; i++) std::cout << *(sp1.operator->()+i) << " ";
            std::cout << endl << endl;
        }

        sp1.reset();
        sp2.reset();
        std::cout << "UseCount of sp1: " << sp2.useCount() << endl;
        std::cout << "UseCount of sp2: " << sp2.useCount() << endl;

    }
    return 0;
}
