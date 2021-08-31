#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream> 

class Fixed
{
private:
    int                 _store;
    static const int    _bit;
    /* data */
public:
    Fixed( Fixed const &ref );
    Fixed( void );
    ~Fixed( void );
    Fixed   &   operator=( Fixed const & ref );
    int     getRawBits( void ) const;
    void    setRawBits( const int raw );
   
};

#endif