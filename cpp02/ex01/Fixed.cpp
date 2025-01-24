#include "Fixed.hpp"

Fixed::Fixed(){
    std::cout << "Default constructor called\n";

}

Fixed::Fixed(const Fixed& reference){
    
    std::cout << "Copy constructor called\n";
    integer = reference.integer;
}

Fixed& Fixed::operator=(const Fixed& a){
    std::cout << "Copy assignment operator called\n";
    this->integer = a.integer;
    return *this;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called\n";
}

Fixed::Fixed(const int x){
    std::cout << "Int constructor called\n";
    integer = x << f_bits;
}

Fixed::Fixed(const float x){
    std::cout << "Float constructor called\n";
    integer = x  * (1 << f_bits);
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
    std::cout << "getRawBits member function called\n";
    return integer;
}
