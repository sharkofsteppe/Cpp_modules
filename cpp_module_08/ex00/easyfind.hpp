#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <vector>
#include <iostream>

template<typename T>
typename T::iterator    easyfind(T &arr, const int &i)
{
    typename T::iterator it;

    it = std::find(arr.begin(), arr.end(), i);
    if (it == arr.end())
        throw std::string("THERE IS NO SUCH NUMBER");
    return (it);
}

#endif