#include <iostream>
using namespace std;

template <typename T>
class Vector
{
private:
    // Data Members
    T *arr;
    int cs, ms; // cs = current size, ms = max size

public:
    Vector(int maxSize = 1)
    {
        cs = 0;
        ms = maxSize;
        arr = new T[ms];
    }

    // pushBack functionality
    void push_back(const T d)
    {
        // two cases
        if (cs = ms)
        {
            // we have to create new array of double size, copy contents from previous array and then delete the old array.
            T *oldArr = arr;
            ms = 2ms;
            arr = new T[ms];

            // copy elements
            for (int i = 0; i < cs; i++)
            {
                arr[i] = oldArr[i];
            }

            // Delete oldArr
            delete[] oldArr;
        }
        else
        {
            arr[cs] = d;
            cs++;
        }
    }

    void pop_back()
    {
        if (cs >= 0)
        {
            cs--;
        }
    }

    void isEmpty()
    {
        return cs == 0;
    }

    // front, back , arr[i], []

    T front() const
    {
        return arr[0];
    }

    T back() const
    {
        return arr[cs - 1];
    }

    T at(const int i) const
    {
        return arr[i];
    }

    int size() const
    {
        return cs;
    }

    int capacity() const
    {
        return ms;
    }

    // operator overloading
    T operator[](const int i) const
    {
        return arr[i];
    }
};