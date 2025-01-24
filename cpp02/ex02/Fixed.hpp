#ifndef _FIXED__
#define _FIXED__

#include <iostream>
#include <cmath>


class Fixed{
    private:
        int         integer;
        static const int f_bits = 8;
    public:
        Fixed();
        Fixed(const Fixed& reference);
        Fixed(const int x);
        Fixed(const float x);
        ~Fixed();
        Fixed&  operator=(const Fixed& a);
    
        // comparison operators
        bool    operator>(const Fixed& a) const;
        bool    operator<(const Fixed& a) const;
        bool    operator<=(const Fixed& a) const;
        bool    operator>=(const Fixed& a) const;
        bool    operator==(const Fixed& a) const;
        bool    operator!=(const Fixed& a) const;

        //arithmetic operators
        
        Fixed operator+(const Fixed& a);
        Fixed operator-(const Fixed& a);
        Fixed operator/(const Fixed& a);
        Fixed operator*(const Fixed& a);

        Fixed& operator++( void );
        Fixed operator++( int );
        Fixed& operator--( void );
        Fixed operator--( int );

        // geters and setters
        int     getRawBits( void ) const;
        void    setRawBits( int const raw );
        //
        static Fixed& min(Fixed& a, Fixed& b);
        static const Fixed& min(const Fixed& a, const Fixed& b);
        static Fixed& max(Fixed& a, Fixed& b);
        static const Fixed& max(const Fixed&  a, const Fixed& b);
        //
        float   toFloat( void ) const;
        int     toInt( void ) const;
};

std::ostream& operator<<(std::ostream& o_stream, const Fixed& a);


#endif //_FIXED__