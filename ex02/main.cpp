#include "Fixed.hpp"
#include <iostream>
int main( void ) {
    Fixed a (50);
    Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a + b<< std::endl;
    std::cout << b << std::endl;
    std::cout << "Max : " << Fixed::max( a, b ) << std::endl;
    return 0;
}