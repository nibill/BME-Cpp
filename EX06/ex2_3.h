#ifndef EX2_3_H
#define EX2_3_H
#include <iostream>

using namespace std;

namespace ex2_3
{
    class A
    {
        public:
            A()
            {
                cout << "A()" << endl;
            }
            ~A()
            {
                cout << "~A()" << endl;
            };
    };

    class B
    {
    public:
        B()
        {
            cout << "B()" << endl;
        }
        ~B()
        {
            cout << "~B()" << endl;
        }
    };

    class C
    {
    public:
        C()
        {
            cout << "C()" << endl;
        }
        ~C()
        {
            cout << "~C()" << endl;
        }
    };


    class ABC : public A, public C, public B
    {
    public:
        ABC(): A(), C(), B()
        {
            cout << "ABC()" << endl;
        }
        ~ABC()
        {
            cout << "~ABC()" << endl;
        }
    };

    void test();
}


#endif // EX2_3_H