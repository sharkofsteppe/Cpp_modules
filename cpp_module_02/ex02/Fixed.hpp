#ifndef FIXED_HPP
#define FIXED_HPP

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
    Fixed&  operator++( void );
    Fixed&  operator--( void );
    Fixed   operator++( int );
    Fixed   operator--( int );
    Fixed   operator+( Fixed const & rhs) const;
    Fixed   operator-( Fixed const & rhs) const;
    Fixed   operator*( Fixed const & rhs) const;
    Fixed   operator/( Fixed const & rhs) const;
    bool    operator==( const Fixed & rhs ) const;
    bool    operator!=( const Fixed & rhs ) const;
    bool    operator<( const Fixed & rhs) const;
    bool    operator>( const Fixed & rhs) const;
    bool    operator<=( const Fixed & rhs) const;
    bool    operator>=( const Fixed & rhs) const;
    static  Fixed & min( Fixed & a, Fixed & b);
    static  const  Fixed & min(const Fixed & a, const Fixed & b);
    static  Fixed & max( Fixed & a, Fixed & b);
    static  const  Fixed & max( const Fixed & a, const Fixed & b);

};

std::ostream    &   operator<<( std::ostream &out, Fixed const &point );





#endif