#include <iostream>
#include <cstdlib>

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