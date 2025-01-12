#include <iostream>


class Fixed{
    private:
        int     integer;
        static const int constInt = 8;
    public:
        Fixed();
        Fixed(const Fixed& reference);
        Fixed(const int x);
        Fixed(const float x);
        ~Fixed();
        Fixed& operator=(Fixed& a);
        int getRawBits( void ) const;
        void setRawBits( int const raw );
        float toFloat( void ) const;
        int toInt( void ) const;
};
