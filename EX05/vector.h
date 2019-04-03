#ifndef VECTOR_H
#define VECTOR_H

#include <iostream>

class Vector
{
private:
    int* m_data;
    size_t m_size;
public:
    Vector();
    Vector(size_t l);
    Vector(size_t l, int value);

    Vector(const Vector& copy);
    Vector(Vector&& move);
    ~Vector();

    size_t size();
    int at(size_t idx);
    void push_back(int addElem);
    void pop_back();
    void clear();

};

#endif // VECTOR_H