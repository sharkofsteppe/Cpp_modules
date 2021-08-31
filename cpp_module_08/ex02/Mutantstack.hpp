#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <stack>
#include <list>
#include <algorithm>
#include <string>
#include <iostream>

template< typename T >
class Mutantstack : public std::stack<T>
{
private:
    /* data */
public:
    typedef typename std::stack<T>::container_type::iterator iterator;
    typedef typename std::stack<T>::container_type::const_iterator const_iterator;
    typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
    typedef typename std::stack<T>::container_type::const_reverse_iterator const_reverse_iterator;
    Mutantstack(void) : std::stack<T>() {};
    Mutantstack(const Mutantstack& copy) : std::stack<T>(copy){};
    virtual ~Mutantstack() {};

    Mutantstack &operator=(const Mutantstack &op)
    {
        if (this == &op)
            return (*this);
        std::stack<T>::operator=(op);
        return (*this);
    };
    iterator begin(){ return (std::stack<T>::c.begin());}
    iterator end(){ return (std::stack<T>::c.end());}
    const_iterator begin() const { return (std::stack<T>::c.begin());}
    const_iterator end() const { return (std::stack<T>::c.end());}
    reverse_iterator rbegin() { return (std::stack<T>::c.rbegin()); }
    reverse_iterator rend() { return (std::stack<T>::c.rend()); }
    const_reverse_iterator rbegin() const { return (std::stack<T>::c.rbegin()); }
    const_reverse_iterator rend() const { return (std::stack<T>::c.rend()); }
};

#endif