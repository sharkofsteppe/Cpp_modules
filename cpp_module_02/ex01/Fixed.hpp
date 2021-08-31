#ifndef FIXED_HPP
#define FIXED_HPP
#define DIGITS 1024

#include <iostream> 
#include <math.h>


class Fixed
{
private:
    int                 _store;
    static const int    _bit;
    /* data */
public:
    Fixed( void );
    Fixed( Fixed const &ref );
    Fixed( const int conv);
    Fixed( const float conv);
    ~Fixed( void );
    int     getRawBits( void ) const;
    void    setRawBits( const int raw );
    float   toFloat( void ) const;
    int     toInt( void ) const;
    Fixed&  operator=( Fixed const & ref );
};

std::ostream    &   operator<<( std::ostream &out, Fixed const &point );

#endif