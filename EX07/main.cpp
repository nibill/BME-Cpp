/* Exercise 08 - "Abstract Class"
 *
 * @author Thomas Buchegger
 * @email thomas.bucheggeratstudents.unibe.ch
 * @created  15.05.2019 20:00
 *
 * University of Bern / Bern University of Applied Sciences
 * Course 394661-FS2019-0: C++ Programming I
 */

#include <iostream>
#include <vector>
#include "triangle.h"
#include "square.h"
#include "circle.h"

int main()
{
    Triangle t1 (1 ,2);
    Triangle t2 (3 ,4);
    Triangle t3 (5 ,6);
    Square s1 (1);
    Square s2 (2);
    Square s3 (3);
    Circle c1 (1);
    Circle c2 (2);
    Circle c3 (3);

    std::vector<Shape*> shapeVec {&t1 , &t2 , &t3 , &s1 , &s2 , &s3 , &c1 , &c2 , &c3 };

    // Range−based f o r l o op (C++11)
    for ( const auto & element : shapeVec )
    {
        element -> report ();
}
    return 0;
}
