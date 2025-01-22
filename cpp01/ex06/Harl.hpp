#ifndef HARL__
#define HARL__
#include <iostream>

class Harl{
    private:
        void debug( void );
        void info( void );
        void warning( void );
        void error( void );
    public:
        void complain( std::string level );
};

int checkLevel(std::string str);
#endif