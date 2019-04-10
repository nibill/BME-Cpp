#ifndef EX2_4_H
#define EX2_4_H

#include <iostream>

using namespace std;

namespace ex2_4
{
    class A
    {
    protected:
        int m_A{0};
    public:
        A()
        {
            cout << "A()" << endl;
        }
        ~A()
        {
            cout << "~A()" << endl;
        }
        friend class B;
    };

    class B : private A
    {
    public:
        B() : A()
        {
            cout << "B()" << endl;
        }
        ~B()
        {
            cout << "~B()" << endl;
        }
    };

    class C : public B
    {
    public:
        C() : B()
        {
            cout << "C()" << endl;
        }
        ~C()
        {
            cout << "~C()" << endl;
        }
    };

    void test();
}


#endif // EX2_4_H