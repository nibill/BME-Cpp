#include <string>
#include <iostream>
#include "stack.h"

using namespace std;

Stack::Stack(int capacity)
{
    if (capacity <= 0)
    {
        throw string("Capacity must be positive!");
    }

    m_storage = new int[capacity];
    this->m_capacity = capacity;
    m_top = -1;
}

void Stack::push(int value)
{
    if (m_top == m_capacity)
    {
        throw string("Storage is overflowing");
    }
    m_top++;
    m_storage[m_top] = value;
}

//int Stack::peek()
//{
//    if (m_top == -1)
//    {
//        throw string("Stack is empty!");
//    }

//    return m_storage[m_top];
//}

void Stack::peek()
{
    if(isEmpty())
    {
        throw string("Stack is empty!");
    }
    else
    {

        cout << m_storage[m_top] << endl;
    }
}

void Stack::pop()
{
    if (isEmpty())
    {
        throw string("Stack is empty!");
    }

    m_top--;
}

void Stack::print()
{
    if(m_top>=0) {
       cout<<"Stack elements are:";
       for(int i=m_top; i>=0; i--)
          cout<<m_storage[i]<<" ";
          cout<<endl;
    } else
       cout<<"Stack is empty";
}

bool Stack::isEmpty()
{
    return (m_top == -1);
}

Stack::~Stack()
{
    delete [] m_storage;
}
