#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <string>
#include <stdexcept>


template<typename T>
class Array
{
private:
    T       *_arr;
    int  _size;

    void init( const T*array, int sz)
    {
        _size = sz;
        _arr = new T[ _size ];
        for ( int ix = 0; ix < _size; ++ix )
        if ( ! array )
             _arr[ ix ] = 0;
        else _arr[ ix ] = array[ ix ];
    };

public:
    Array(void) : _arr(0) {} ; 
    Array(unsigned int n){ init(0, n); };
    Array(const Array &ref){ init(ref._arr,ref._size); }



    Array   &operator=(const Array<T> &ref)
    {
        if (*this != ref)
        {
            delete [] _arr;
            init(ref._arr, ref._size);
        }
        return (*this);
    }



    ~Array(void){ delete[] _arr; };




    T   &operator[](int idx)
    {
        if (idx >= _size || idx < 0)
            throw std::out_of_range("Out of range");
        return (_arr[idx]);
    }

    const T   &operator[](int idx) const
    {
        if (idx >= _size || idx < 0)
            throw std::out_of_range("Out of range");
        return (_arr[idx]);
    }
};



#endif