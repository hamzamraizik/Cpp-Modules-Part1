#ifndef _ZOMBIE__
#define _ZOMBIE__

#include <iostream>

class Zombie{
    private:
        std::string name;
    public:
        void setName(std::string Newname);
        void announce(void);
        Zombie();
        ~Zombie();
};

Zombie* zombieHorde( int N, std::string name );

#endif