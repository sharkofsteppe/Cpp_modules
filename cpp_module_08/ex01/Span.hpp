#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <string>
#include <cmath>

class Span
{
public:
    unsigned int            _N;
    std::vector<int>        arr;
public:
    Span(void);
    Span(unsigned int n);
    Span    &operator=(const Span &ref);
    Span(const Span &ref);
    ~Span();
    void    addNumber(int num);
    void    addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end);
    int     shortestSpan(void);
    int     longestSpan(void);
};


#endif