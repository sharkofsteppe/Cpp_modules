#include "Fixed.hpp"

const int     Fixed::_bit = 8;

Fixed   &   Fixed::operator=( Fixed const & ref )
{
    std::cout << "Assignation operator called " << std::endl;
    this->_store = ref.getRawBits();
    return (*this);
}

int     Fixed::getRawBits( void ) const
{
    std::cout << "getRawBits function called here" << std::endl;
    return (this->_store);
}

void    Fixed::setRawBits( const int raw )
{
    std::cout << "setRawBits function called here" << std::endl;
    this->_store = raw;
}

Fixed::Fixed( Fixed const &ref )
{
    std::cout << "Copy constructor worked here" << std::endl;
    *this = ref;  
}

Fixed::Fixed() : _store(0)
{
    std::cout << "Default constructor worked here" << std::endl;

}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}
