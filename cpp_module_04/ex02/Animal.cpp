#include "Animal.hpp"

Animal::Animal( std::string type ) : _type(type)
{

    std::cout << "Animal constructor have done the work" << std::endl;
}

Animal::Animal( void ) : _type("Default")
{
    std::cout << "Animal Default constructor have done the work" << std::endl;
}

Animal::~Animal()
{
    std::cout << "Animal Destructor have done the work" << std::endl;
}

Animal::Animal( Animal const & ref )
{
    std::cout << "Animal Copy constructor worked here" << std::endl;
    *this = ref;
}

Animal & Animal::operator=( Animal const &ref)
{
    std::cout << "Assignation operator called " << std::endl;
    this->_type = ref.getType();
    return (*this);
}

std::string     Animal::getType( void ) const
{
    return (this->_type);
}
