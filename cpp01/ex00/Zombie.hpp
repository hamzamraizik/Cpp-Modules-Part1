#include <iostream>
#include <cstdlib>

class Zombie{
    private:
        std::string name;
    public:
        ~Zombie();
        void setName(std::string name);
        void announce(void);
};

Zombie* newZombie( std::string name );
void randomChump( std::string name );
