#ifndef ITER_HPP
#define ITER_HPP

#include <string>
#include <iostream>

template<typename T>
void    iter(T *a, int i, void (*f)(T&))
{
    for(int j = 0; j < i; j++)
    {
        (*f)(a[j]);
    }
}

#endif