#ifndef SHAREDPTR_H
#define SHAREDPTR_H

#include <iostream>

template<class T1>
class SharedPtr
{

protected:

    // define the pointe

    T1 *m_ptr;

    int m_refCnt{0}; // count the number of references

public:

    SharedPtr(T1 *ptr = nullptr):m_ptr(ptr){}

    // destructor
    ~SharedPtr()
    {
        delete m_ptr;
    }

    // Copy constructor
    SharedPtr(SharedPtr &copy_ptr)
    {
        m_ptr = new T1;

        if (m_ptr != nullptr)
        {
            m_ptr = copy_ptr.m_ptr;

            // use count mechanism
            copy_ptr.m_refCnt++;
            m_refCnt = copy_ptr.m_refCnt;
        }
        else
        {
           std::cout<<"Sorry, no move today..."<<std::endl;
        }
    }

    // move constructor
    SharedPtr(SharedPtr &&move_ptr)
    {
        // check if move ptr is null ...
        if (move_ptr.m_ptr != nullptr)
        {
              m_ptr = move_ptr.m_ptr;
              // set old pointer to null ptr
             move_ptr.m_ptr = nullptr;
        }
        else
        {
            std::cout<<"Sorry, no move today..."<<std::endl;
        }
    }

    // Dereferencing Operators ---------------------------------------
    T1& operator* ()
    {
        return *m_ptr;
    }

    T1* operator-> ()
    {
        return m_ptr;
    }

    //disable = move operator
   void operator= (SharedPtr &&move_ptr) = delete;

    // overloading  = operator to make a copy out of it..
    T1 operator= ( SharedPtr &copy_ptr)
    {
        m_ptr = new T1;

        if (m_ptr != nullptr)
        {
            m_ptr = copy_ptr.m_ptr;

            // use count mechanism
            copy_ptr.m_refCnt++;
            m_refCnt = copy_ptr.m_refCnt;
        }
        else
        {
           std::cout<<"Sorry, no move today..."<<std::endl;
        }

     return *this->m_ptr;
    }

    // functions------------------------------------------------------

    int useCount()
    {
        return m_refCnt;
    }

    void reset()
    {
        m_refCnt=0;
    }
};

template<class T1>
class SharedPtr<T1[]>
{

protected:

    // define the pointe

    T1 *m_ptr;

    int m_refCnt{0}; // count the number of references

public:

    SharedPtr(T1 *ptr = nullptr):m_ptr(ptr){}

    // destructor
    ~SharedPtr()
    {
        delete[] m_ptr;
    }

    // Copy constructor
    SharedPtr(SharedPtr &copy_ptr)
    {
        m_ptr = new T1;

        if (m_ptr != nullptr)
        {
            m_ptr = copy_ptr.m_ptr;

            // use count mechanism
            copy_ptr.m_refCnt++;
            m_refCnt = copy_ptr.m_refCnt;
        }
        else
        {
           std::cout<<"Sorry, no move today..."<<std::endl;
        }
    }

    // move constructor
    SharedPtr(SharedPtr &&move_ptr)
    {
        // check if move ptr is null ...
        if (move_ptr.m_ptr != nullptr)
        {
              m_ptr = move_ptr.m_ptr;
              // set old pointer to null ptr
             move_ptr.m_ptr = nullptr;
        }
        else
        {
            std::cout<<"Sorry, no move today..."<<std::endl;
        }
    }

    // Dereferencing Operators ---------------------------------------
    T1& operator* ()
    {
        return *m_ptr;
    }

    T1* operator-> ()
    {
        return m_ptr;
    }

    //disable = move operator
   void operator= (SharedPtr &&move_ptr) = delete;

    // overloading  = operator to make a copy out of it..
    T1 operator= ( SharedPtr &copy_ptr)
    {
        m_ptr = new T1;

        if (m_ptr != nullptr)
        {
            m_ptr = copy_ptr.m_ptr;

            // use count mechanism
            copy_ptr.m_refCnt++;
            m_refCnt = copy_ptr.m_refCnt;
        }
        else
        {
           std::cout<<"Sorry, no move today..."<<std::endl;
        }

     return *this->m_ptr;
    }

    // functions------------------------------------------------------

    int useCount()
    {
        return m_refCnt;
    }

    void reset()
    {
        m_refCnt=0;
    }
};

#endif // SHAREDPTR_H
