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
