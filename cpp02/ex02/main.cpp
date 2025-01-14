#include "Fixed.hpp"

Fixed::Fixed(){
    integer = 0;
    // std::cout << "Default constructor called" << std::endl;

}

Fixed::Fixed(const Fixed& reference){
    
    // std::cout << "Copy constructor called" << std::endl;
    integer = reference.integer;
}

Fixed& Fixed::operator=(const Fixed& a){
    // std::cout << "Copy assignment operator called" << std::endl;
    this->integer = a.integer;
    return *this;
}

Fixed::~Fixed()
{
    // std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const int x){
    // std::cout << "Int constructor called" << std::endl;
    integer = x << f_bits;
}

Fixed::Fixed(const float x){
    // std::cout << "Float constructor called" << std::endl;
    integer = roundf(x  * (1 << f_bits));
}

int Fixed::toInt(void) const{
    return (integer >> f_bits);
}

float   Fixed::toFloat( void ) const {
    return ((float)integer / (1 <<  f_bits));
}

std::ostream& operator<<(std::ostream& o_stream, const Fixed& a){
    o_stream << a.toFloat();
    return o_stream;
}

void  Fixed::setRawBits(int const raw ){
    integer = raw;
}

int Fixed::getRawBits(void ) const{
    // std::cout << "getRawBits member function called" << std::endl;
    return integer;
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
