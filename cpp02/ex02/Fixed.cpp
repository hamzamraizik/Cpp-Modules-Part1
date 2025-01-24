#include "Fixed.hpp"

bool Fixed::operator>(const Fixed& a) const{
    if (this->integer > a.integer)
        return true;
    else
        return false;
}

bool Fixed::operator<(const Fixed& a) const{
    if (this->integer < a.integer)
        return true;
    else
        return false;
}

bool Fixed::operator<=(const Fixed& a) const{
    if (this->integer <= a.integer)
        return true;
    else
        return false;
}
bool Fixed::operator>=(const Fixed& a) const{
    if (this->integer >= a.integer)
        return true;
    else
        return false;
}

bool Fixed::operator==(const Fixed& a) const{
    return ((this->integer == a.integer));
}

bool Fixed::operator!=(const Fixed& a) const{
    return ((this->integer != a.integer));
}

Fixed   Fixed::operator+(const Fixed& a)
{
    std::cout << "arithmitic operator called\n";
    int x = this->integer + a.integer;
    Fixed   b;
    b.integer = x;

    return b;
}
Fixed   Fixed::operator-(const Fixed& a)
{
    std::cout << "arithmitic operator called\n";
    int x = this->integer - a.integer;
    Fixed   b;
    b.integer = x;

    return b;
}

Fixed   Fixed::operator/(const Fixed& a)
{
    // std::cout << "arithmitic operator called\n";
    int x = this->integer / a.integer;
    Fixed   b;
    b.integer = x;

    return b;
}

Fixed& Fixed::operator++(void){//++x
    this->integer++;
    return *this;
}

Fixed Fixed::operator++(int){//x++
    Fixed Test;

    Test.integer += 1;
    return (Test);
}
Fixed& Fixed::operator--(void){//--x
    this->integer--;
    return *this;
}

Fixed Fixed::operator--(int){//x--
    Fixed Test;

    Test.integer -= 1;
    return (Test);
}

Fixed& Fixed::min(Fixed& a, Fixed& b){
    if (a < b)
        return a;
    else
        return b;
}

const Fixed& Fixed::min(const Fixed& a, const Fixed& b){
    if (a < b)
        return a;
    else
        return b;
}

Fixed& Fixed::max(Fixed& a, Fixed& b){
    if (a > b)
        return a;
    else
        return b;
}

const Fixed& Fixed::max(const Fixed& a, const Fixed& b){
    if (a > b)
        return a;
    else
        return b;
}

Fixed   Fixed::operator*(const Fixed& a)
{
    // std::cout << "arithmitic operator called\n";
    // int x = this->integer * a.integer;
    /* this.integer(x * 256) * (a.integer * 256) Not true
          should i do just: thi.integer * a.integer * 256;
          */
    int x = (this->integer * a.integer) / (1 << f_bits);
    Fixed   b;
    b.integer = x;

    return b;
}



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
    integer = roundf(x * (1 << f_bits));
}

int Fixed::toInt(void) const{
    return (integer >> f_bits);
}

float   Fixed::toFloat( void ) const {
    return ((float)integer / (1 <<  f_bits));
}

int Fixed::getRawBits(void ) const{
    // std::cout << "getRawBits member function called" << std::endl;
    return integer;
}
