#include "Dog.hpp"

Dog::Dog( std::string type ) : Animal( type )
{
    this->_type = type;
    std::cout << "Dog constructor have done the work" << std::endl;
}

Dog::Dog( void ) : Animal("Dog")
{
    std::cout << "Dog Default constructor have done the work" << std::endl;
}

Dog::~Dog()
{
    std::cout << "Dog Destructor have done the work" << std::endl;
}

Dog::Dog( Dog const & ref )
{
    std::cout << "Dog Copy constructor worked here" << std::endl;
    *this = ref;
}

Dog & Dog::operator=( Dog const &ref)
{
    std::cout << "Assignation operator called " << std::endl;
    this->_type = ref.getType();
    return (*this);
}

void    Dog::makeSound( void ) const
{
    std::cout << "BARK BARK BARK BARK" << std::endl;
}