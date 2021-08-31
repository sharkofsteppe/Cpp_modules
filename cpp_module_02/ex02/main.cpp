#include "Fixed.hpp"
#include <iostream>

int main( void ) 
{
Fixed a(5);
Fixed c(2);
// Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
// std::cout << a << std::endl;
// std::cout << ++a << std::endl;
// std::cout << a << std::endl;
// std::cout << a++ << std::endl;
// std::cout << a << std::endl;
// std::cout << b << std::endl;
// std::cout << Fixed::max( a, b ) << std::endl;
std::cout.precision(3);

std::cout<<  std::fixed <<  a / c  << '\n';

return 0;
}