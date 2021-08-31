#include "Dog.hpp"

Dog::Dog( void ) : Animal("Dog")
{
    this->_dptr = new Brain();
    std::cout << "Dog Default constructor have done the work" << std::endl;
}

Dog::~Dog()
{
    delete _dptr;
    std::cout << "Dog Destructor have done the work" << std::endl;
}

Dog::Dog( Dog const & ref )
{
    this->_dptr = new Brain(*(ref._dptr));
    this->_type = ref._type;
    std::cout << "Dog Copy constructor worked here" << std::endl;
}

Dog & Dog::operator=( Dog const &ref)
{
    std::cout << "Assignation operator of Dog called " << std::endl;
    this->_type = ref.getType();
    *_dptr = *(ref._dptr);
    return (*this);
}

void    Dog::makeSound( void ) const
{
    std::cout << "BARK BARK BARK BARK" << std::endl;
}

Brain   &   Dog::getBrain( void )
{
    return (*_dptr);
}

Brain   *   Dog::fieldcontrol( void )
{
    return (_dptr);
}
