#include "Fixed.hpp"

Fixed::Fixed(){
    std::cout << "Default constructor called\n";

}

Fixed::Fixed(const Fixed& reference){
    
    std::cout << "Copy constructor called\n";
    integer = reference.integer;
}

Fixed& Fixed::operator=(Fixed& a){
    integer = a.integer;
    std::cout << "Copy assignment operator called\n";
    return *this;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called\n";
}

void  Fixed::setRawBits(int const raw ){
    integer = raw;
}

int Fixed::getRawBits(void ) const{
    std::cout << "getRawBits member function called" << std::endl;
    return integer;
}

