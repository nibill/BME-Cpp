#ifndef SHAREDPTR_H
#define SHAREDPTR_H

#include <iostream>

template<class T1>
class SharedPtr
{
protected:
    T1 *mPtr;
    int mRefCnt{0};
public:
    SharedPtr(T1 *ptr = nullptr):mPtr(ptr){}
    ~SharedPtr()
    {
        delete mPtr;
    }

    SharedPtr(SharedPtr &copy_ptr)
    {
        mPtr = new T1;
        if (mPtr == nullptr)
        {
            std::cout << "Pointer is empty."<<std::endl;
            return;
        }

        mPtr = copy_ptr.mPtr;
        copy_ptr.mRefCnt++;
        mRefCnt = copy_ptr.mRefCnt;
    }

    SharedPtr(SharedPtr &&move_ptr)
    {
        if (move_ptr.mPtr == nullptr)
        {
            std::cout << "Pointer is empty."<<std::endl;
            return;
        }
        mPtr = move_ptr.mPtr;
        move_ptr.mPtr = nullptr;
    }

    T1& operator* ()
    {
        return *mPtr;
    }

    T1* operator-> ()
    {
        return mPtr;
    }

    void operator= (SharedPtr &&move_ptr) = delete;

    T1 operator= (SharedPtr &copy_ptr)
    {
        mPtr = new T1;
        if (mPtr == nullptr)
        {
            std::cout << "Pointer is empty."<<std::endl;
            return *this->mPtr;
        }
        mPtr = copy_ptr.mPtr;
        copy_ptr.mRefCnt++;
        mRefCnt = copy_ptr.mRefCnt;

        return *this->mPtr;
    }

    int useCount()
    {
        return mRefCnt;
    }

    void reset()
    {
        mRefCnt=0;
    }
};

template<class T1>
class SharedPtr<T1[]>
{
protected:
    T1 *mPtr;
    int mRefCnt{0};
public:
    SharedPtr(T1 *ptr = nullptr):mPtr(ptr){}
    ~SharedPtr()
    {
        delete[] mPtr;
    }

    SharedPtr(SharedPtr &copy_ptr)
    {
        mPtr = new T1;
        if (mPtr == nullptr)
        {
            std::cout << "Pointer is empty."<<std::endl;
            return;
        }

        mPtr = copy_ptr.mPtr;
        copy_ptr.mRefCnt++;
        mRefCnt = copy_ptr.mRefCnt;
    }

    SharedPtr(SharedPtr &&move_ptr)
    {
        if (move_ptr.mPtr == nullptr)
        {
            std::cout << "Pointer is empty."<<std::endl;
            return;
        }
        mPtr = move_ptr.mPtr;
        move_ptr.mPtr = nullptr;
    }

    T1& operator* ()
    {
        return *mPtr;
    }

    T1* operator-> ()
    {
        return mPtr;
    }

    void operator= (SharedPtr &&move_ptr) = delete;

    T1 operator= (SharedPtr &copy_ptr)
    {
        mPtr = new T1;
        if (mPtr == nullptr)
        {
            std::cout << "Pointer is empty."<<std::endl;
            return *this->mPtr;
        }
        mPtr = copy_ptr.mPtr;
        copy_ptr.mRefCnt++;
        mRefCnt = copy_ptr.mRefCnt;

        return *this->mPtr;
    }

    int useCount()
    {
        return mRefCnt;
    }

    void reset()
    {
        mRefCnt=0;
    }
};

#endif // SHAREDPTR_H
