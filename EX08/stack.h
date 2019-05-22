#ifndef STACK_H
#define STACK_H

#include <array>
#include <iostream>
#include <cstddef>

#include <fstream>
#include <istream>
#include <iostream>
#include <string>



using namespace std;

template<typename T, size_t size>
class StackDefault
{
protected:
    array<T,size> m_storage;
    size_t m_top{0};
public:
    StackDefault<T,size>() {}
    ~StackDefault<T,size>() {}

    void push(T value)
    {
        if(this->m_top == 10)
        {
            cout << "storage is overflowing!" << endl;
        }
        else
        {
            cout << "Add: " << value << endl;
            this->m_storage[this->m_top++] = value;
        }
    }

    T pop()
    {
        if(isEmpty())
        {
            cout << "Storage is empty!" << endl;
        }
        else
        {
            T value = this->m_storage[this->m_top-1];
            this->m_storage[--this->m_top] = 0;
            cout << "Pop: " << value << endl;
            return value;
        }
    }

    T peek()
    {
        cout << "Peek: " << this->m_storage[this->m_top-1] << endl;
        return this->m_storage[this->m_top-1];
    }

    void print()
    {
        cout << "Print():" << endl;
        for (size_t i = 0; i < size; ++i)
        {
            cout << "Stack" << i << ": " << this->m_storage[i] << endl;
        }
    }

    bool isEmpty()
    {
        if (this->m_top <= -1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};


template<typename T, size_t size>
class Stack : public StackDefault<T,size>
{

};

template<size_t size>
class Stack<string, size> : public StackDefault<string,size>
{
public:
    string pop()
    {
        string value = StackDefault<string,size>::m_storage[StackDefault<string,size>::m_top-1];
        StackDefault<string,size>::m_storage[--StackDefault<string,size>::m_top] = "";
        cout << "Pop: " << value << endl;
        return value;
    }
};

#endif // STACK_H
