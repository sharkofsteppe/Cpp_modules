#include "Brain.hpp"

Brain::Brain( void )
{
    std::cout << "Brain Default constructor have done the work" << std::endl;
}

Brain::~Brain()
{
    std::cout << "Brain Destructor have done the work" << std::endl;
}

Brain::Brain( Brain const & ref )
{
    std::cout << "Brain Copy constructor worked here" << std::endl;
    *this = ref;
}

Brain & Brain::operator=( Brain const &ref)
{
    std::cout << "Assignation operator of Brain called " << std::endl;
    for( int i = 0; i < 100; i++)
    {
        this->_ideas[i] = ref._ideas[i];
    }
    return (*this);
}

void    Brain::setprop(std::string str)
{
    this->_ideas[0] = str;
}

std::string Brain::getprop( void )
{
    return (_ideas[0]);
}
