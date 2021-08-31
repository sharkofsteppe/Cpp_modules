#ifndef BRAIN_HPP
#define BRAIN_HPP


#include <string>
#include <iostream>

class Brain
{
private:
    std::string _ideas[100];
public:
    void        setprop(std::string str);
    std::string getprop( void );
    Brain( Brain const & ref );
    Brain   &   operator=( Brain const &ref);
    Brain();
    ~Brain();
};

#endif