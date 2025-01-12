#include <iostream>


class Fixed{
    private:
        int     integer;
        static const int constInt = 8;
    public:
        Fixed();
        Fixed(const Fixed& reference);
        ~Fixed();
        // Fixed& operator=(Fixed& a);
        bool operator>(Fixed& a);
        bool operator<(Fixed& a);
        bool operator<=(Fixed& a);
        bool operator>=(Fixed& a);
        bool operator==(Fixed& a);
        bool operator!=(Fixed& a);
        int getRawBits( void ) const;
        void setRawBits( int const raw );
};
