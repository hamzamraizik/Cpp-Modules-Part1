#include "Fixed.hpp"

std::ostream& operator<<(std::ostream& o_stream, const Fixed& a){
    o_stream << a.toFloat();
    return o_stream;
}

void  Fixed::setRawBits(int const raw ){
    integer = raw;
}


int main( void ) {
Fixed a;
Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
std::cout << a << std::endl;
std::cout << ++a << std::endl;
std::cout << a << std::endl;
std::cout << a++ << std::endl;
std::cout << a << std::endl;
std::cout << b << std::endl;
std::cout << Fixed::max( a, b ) << std::endl;
return 0;
}
