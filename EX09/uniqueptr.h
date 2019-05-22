#ifndef UNIQUEPTR_H
#define UNIQUEPTR_H

#include <iostream>

template<class T1>
class UniquePtr
{

protected:

    // define the pointe

    T1 *m_ptr;

public:

    UniquePtr(T1 *ptr= nullptr):m_ptr(ptr){}

    ~UniquePtr()
    {
        delete m_ptr;
    }

    // delete Copy constructor
    UniquePtr(const UniquePtr &copy_ptr) = delete;

    // move constructor
    UniquePtr(UniquePtr &&move_ptr)
    {
        // check if move ptr is null
        if (move_ptr.m_ptr != nullptr)
        {
              m_ptr = move_ptr.m_ptr;
              // set old pointer to null ptr
             move_ptr.m_ptr = nullptr;
        }
        else
        {
            std::cout<<"sorry, no move today..."<<std::endl;
        }
    }

    // Dereferencing Operators
    T1& operator* ()
    {
        return *m_ptr;
    }

    T1* operator-> ()
    {
        return m_ptr;
    }

    //disable = operator!
   void operator= (UniquePtr &ptr) = delete;

    // overloading  = operator to make a move out of it..
    T1& operator= ( UniquePtr &&ptr)
    {
        // check if possible ptr is null...
        if (ptr.m_ptr != nullptr)
        {
              m_ptr = ptr.m_ptr;
              // set old pointer to null ptr
             ptr.m_ptr = nullptr;
        }
        else
        {
            std::cout<<"no move today..."<<std::endl;
        }

        return *this->m_ptr;
    }
};

template<class T1>
class UniquePtr<T1[]>
{

protected:

    // define the pointe

    T1 *m_ptr;

public:

    UniquePtr(T1 *ptr= nullptr):m_ptr(ptr){}

    ~UniquePtr()
    {
        delete[] m_ptr;
    }

    // delete Copy constructor
    UniquePtr(const UniquePtr<T1[]> &copy_ptr) = delete;

    // move constructor
    UniquePtr(UniquePtr<T1[]> &&move_ptr)
    {
        // check if move ptr is null
        if (move_ptr.m_ptr != nullptr)
        {
              m_ptr = move_ptr.m_ptr;
              // set old pointer to null ptr
             move_ptr.m_ptr = nullptr;
        }
        else
        {
            std::cout<<"sorry, no move today..."<<std::endl;
        }
    }

    // Dereferencing Operators
    T1& operator* ()
    {
        return *m_ptr;
    }

    T1* operator-> ()
    {
        return m_ptr;
    }

    //disable = operator!
   void operator= (UniquePtr<T1[]> &ptr) = delete;

    // overloading  = operator to make a move out of it..
    T1& operator= ( UniquePtr &&ptr)
    {
        // check if possible ptr is null...
        if (ptr.m_ptr != nullptr)
        {
              m_ptr = ptr.m_ptr;
              // set old pointer to null ptr
             ptr.m_ptr = nullptr;
        }
        else
        {
            std::cout<<"no move today..."<<std::endl;
        }

        return *this->m_ptr;
    }
};

#endif // UNIQUEPTR_H
