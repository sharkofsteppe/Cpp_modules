#include "Fixed.hpp"

const int     Fixed::_bit = 8;


Fixed::Fixed() : _store(0)
{
    std::cout << "Default constructor worked here" << std::endl;

}
Fixed::Fixed( const float conv )
{
    std::cout << "Float constructor worked here" << std::endl;
    this->_store = (int)(roundf(conv * (1 << Fixed::_bit)));
}

Fixed::Fixed( const int conv )
{
    std::cout << "Int constructor worked here" << std::endl;
    this->_store = conv * (1 << Fixed::_bit);
}

Fixed::Fixed( Fixed const &ref )
{
    std::cout << "Copy constructor worked here" << std::endl;
    *this = ref;  
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

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

float   Fixed::toFloat( void ) const
{
    return ((float)(this->_store) / (float)(1 << Fixed::_bit));
}

int     Fixed::toInt( void ) const
{
    return (this->_store / (1 << Fixed::_bit));
}

std::ostream    &   operator<<( std::ostream &out, Fixed const &point )
{
    out << point.toFloat();
    return (out);
}

bool    Fixed::operator==( const Fixed & rhs ) const
{
    return (this->_store == rhs.getRawBits());
}
bool    Fixed::operator!=( const Fixed & rhs ) const
{
    return (!(this->_store == rhs.getRawBits()));
}
bool    Fixed::operator<( const Fixed & rhs) const
{
    return (this->_store < rhs.getRawBits());
}
bool    Fixed::operator>( const Fixed & rhs) const
{
    return (this->_store > rhs.getRawBits());
}
bool    Fixed::operator<=( const Fixed & rhs) const
{
    return (this->_store <= rhs.getRawBits());
}
bool    Fixed::operator>=( const Fixed & rhs) const
{
    return (this->_store >= rhs.getRawBits());
}

Fixed   Fixed::operator+( Fixed const & rhs) const
{
    Fixed res;

    res.setRawBits(this->_store + rhs.getRawBits());
    return (res);
}

Fixed   Fixed::operator-( Fixed const & rhs) const
{
    Fixed res;

    res.setRawBits(this->_store - rhs.getRawBits());
    return (res);
}

Fixed   Fixed::operator*( Fixed const & rhs) const
{
    Fixed res;

    res.setRawBits(this->_store * rhs.getRawBits() >> Fixed::_bit);
    return (res);
}
Fixed   Fixed::operator/( Fixed const & rhs) const
{
    Fixed res;
    
    res.setRawBits((this->_store * 256) / rhs._store);
    
    return (res);
}

Fixed   &  Fixed::operator++( void )
{
    ++this->_store;
    return (*this);
}

Fixed   &  Fixed::operator--( void )
{
    --this->_store;
    return (*this);
}

Fixed   Fixed::operator++( int )
{
    Fixed   res;

    res.setRawBits(_store++);
    return (res);
}

Fixed   Fixed::operator--( int )
{
    Fixed   res;

    res.setRawBits(_store--);
    return (res);
}

Fixed & Fixed::min( Fixed & a, Fixed & b)
{
    if (a > b)
        return (b);
    else
        return (a);
}

const Fixed &  Fixed::min( const Fixed & a, const Fixed & b )
{
    if (a > b)
        return (b);
    else
        return (a);
}

Fixed & Fixed::max( Fixed & a, Fixed & b )
{
    if (a > b)
        return (a);
    else
        return (b);
}

const   Fixed &  Fixed::max( const Fixed & a, const Fixed & b )
{
    if (a > b)
        return (a);
    else
        return (b);
}
