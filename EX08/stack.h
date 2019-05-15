#ifndef STACK_H
#define STACK_H


class Stack
{
private:
    int m_top;
    int m_capacity;
    int *m_storage;
public:
    Stack(int capacity);
    void push(int value);
    //int peek();
    void peek();
    void pop();
    void print();
    bool isEmpty();
    ~Stack();
};

#endif // STACK_H
