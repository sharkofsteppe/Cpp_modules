#include "Span.hpp"

Span::Span(void) : _N() {};

Span::Span(unsigned int n)
{
    this->arr.reserve(n);
    this->_N = n;
}

Span    &Span::operator=(const Span &ref)
{
    if (this == &ref)
        return (*this);
    this->_N = ref._N;
    this->arr = ref.arr;
    return (*this);
}

Span::Span(const Span &ref)
{
    if (this == &ref)
        return ;
    this->_N = ref._N;
    this->arr = ref.arr;
}

Span::~Span()
{
}


void    Span::addNumber(int num)
{
    if (arr.size() == this->_N)
        throw std::string("ALREADY FILLED");
    arr.push_back(num);
}

void    Span::addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
    {
        if (end - begin <= _N)
            std::copy(begin, end, std::back_inserter(this->arr));
        else
        {
            throw std::string("Not enough space");
        }
    }
}


int     Span::shortestSpan(void)
{
    if (arr.size() == 0 || arr.size() == 1)
        throw std::string ("Not enough ints");
    long val;
    val = *(std::max_element(arr.begin(), arr.end()));
    for (size_t i = 0; i < arr.size() - 1 ; i++)
    {
       if (abs(arr[i + 1] - arr[i]) < val)
            val = abs(arr[i + 1] - arr[i]);
    }
    return (val);
}


int     Span::longestSpan(void)
{
    if (arr.size() == 0 || arr.size() == 1)
        throw std::string ("Not enough ints");
    int min = *(std::min_element(arr.begin(), arr.end()));
    int max = *(std::max_element(arr.begin(), arr.end()));
    
    return (max - min);
}