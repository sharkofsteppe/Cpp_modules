#include "Cat.hpp"

Cat::Cat( std::string type ) : Animal( type )
{
    this->_type = type;
    std::cout << "Cat constructor have done the work" << std::endl;
}

Cat::Cat( void ) : Animal("Cat")
{
    std::cout << "Cat Default constructor have done the work" << std::endl;
}

Cat::~Cat()
{
    std::cout << "Cat Destructor have done the work" << std::endl;
}

Cat::Cat( Cat const & ref )
{
    std::cout << "Cat Copy constructor worked here" << std::endl;
    *this = ref;
}

Cat & Cat::operator=( Cat const &ref)
{
    std::cout << "Assignation operator called " << std::endl;
    this->_type = ref.getType();
    return (*this);
}

void    Cat::makeSound( void ) const
{
    std::cout << "MEOW MEOW MEOW MEOW" << std::endl;
}