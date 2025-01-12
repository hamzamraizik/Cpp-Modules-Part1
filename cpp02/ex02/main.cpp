#include "Fixed.hpp"

#include "Fixed.hpp"

Fixed::Fixed(){
    std::cout << "Default constructor called" << std::endl;

}

Fixed::Fixed(const Fixed& reference){
    
    std::cout << "Copy constructor called" << std::endl;
    integer = reference.integer;
}

Fixed& Fixed::operator=(Fixed& a){
    this->integer = a.integer;
    std::cout << "Copy assignment operator called" << std::endl;
    return *this;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

void  Fixed::setRawBits(int const raw ){
    integer = raw;
}

int Fixed::getRawBits(void ) const{
    std::cout << "getRawBits member function called" << std::endl;
    return integer;
}

int main(){
    Fixed a;
    Fixed b(a);
    Fixed c;

    c = b;
    std::cout << a.getRawBits() << std::endl;
std::cout << b.getRawBits() << std::endl;
std::cout << c.getRawBits() << std::endl;
}
