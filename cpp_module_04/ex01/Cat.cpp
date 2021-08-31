#include "Cat.hpp"

Cat::Cat( void ) : Animal("Cat")
{
    this->_cptr = new Brain();
    std::cout << "Cat Default constructor have done the work" << std::endl;
}

Cat::~Cat()
{
    delete _cptr;
    std::cout << "Cat Destructor have done the work" << std::endl;
}

Cat::Cat( Cat const & ref )
{
    this->_cptr = new Brain(*(ref._cptr));
    this->_type = ref._type;
    std::cout << "Cat Copy constructor worked here" << std::endl;
}

Cat & Cat::operator=( Cat const &ref)
{
    std::cout << "Assignation operator of Cat called " << std::endl;
    this->_type = ref.getType();
    *_cptr = *(ref._cptr);
    return (*this);
}

void    Cat::makeSound( void ) const
{
    std::cout << "MEOW MEOW MEOW MEOW" << std::endl;
}

Brain   &   Cat::getBrain( void )
{
    return (*_cptr);
}

Brain   *   Cat::fieldcontrol( void )
{
    return (_cptr);
}
