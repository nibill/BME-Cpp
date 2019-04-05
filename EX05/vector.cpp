#include <iostream>
#include "vector.h"

using namespace std;

Vector::Vector()
{
    m_data = new int[0];
    m_size = 0;
}

Vector::Vector(size_t l)
{
    m_data = new int[static_cast<unsigned long>(l)];
    m_size = l;

    for(size_t i = 0; i < l; i++)
    {
        this->m_data[i] = 0;
    }
}

Vector::Vector(size_t l, int value)
{
    m_data = new int[static_cast<unsigned long>(l)];
    m_size = l;

    for(size_t i = 0; i < l; i++)
    {
        this->m_data[i] = value;
    }
}

Vector::Vector(const Vector& copy)
{
    m_data = nullptr;
    if(copy.m_data != nullptr)
    {
        m_data = new int[static_cast<unsigned long>(copy.m_size)];
        m_size = copy.m_size;
        for(size_t i = 0; i < m_size; i++)
        {
            m_data[i] = copy.m_data[i];
        }
    }
}

Vector::Vector(Vector&& move)
{
    if(move.m_data != nullptr)
    {
        m_size = move.m_size;
        m_data = move.m_data;
        move.m_data = nullptr;
        move.m_size = 0;
    }
}

Vector::~Vector()
{
    delete [] m_data;
    m_size = 0;
}

int Vector::at(size_t i)
{
    if(i < m_size)
    {
        return m_data[i];
    }
    else
    {
        cout << "Index out of range ";
        return 0;
    }   
}

void Vector::push_back(int addEle)
{
    int* tmp = new int [static_cast<unsigned long>(this->m_size + 1)];
    for(size_t i = 0; i < m_size; i++)
    {
        tmp[i] = m_data[i];
    }

    tmp[m_size] = addEle;
    delete [] m_data;
    m_data = tmp;
    m_size = m_size + 1;
    tmp = nullptr;
}

void Vector::pop_back()
{
    this->m_size--;
    int* tmp = new int[static_cast<unsigned long>(this->m_size)];
    for(size_t i = 0; i < m_size; i++)
    {
        tmp[i] = m_data[i];
    }
    
    delete [] m_data;
    m_data = tmp;
    tmp = nullptr;
}

void Vector::clear()
{
    delete [] m_data;
    m_data = nullptr;
    m_size = 0;
}

size_t Vector::size()
{
    return m_size;
}
