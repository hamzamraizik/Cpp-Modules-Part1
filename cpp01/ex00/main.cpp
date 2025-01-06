#include "Zombie.hpp"
#include <cstdlib>

Zombie* newZombie( std::string name ){
    Zombie *newZombie = new(Zombie);

    newZombie->setName(name);
    return (newZombie);
}

void randomChump( std::string name ){
    Zombie randomZombie;

    randomZombie.setName(name);
    randomZombie.announce();
}

void Zombie::setName(std::string randomName){
    name = randomName;
}

void Zombie::announce(void){
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

int main(){
    Zombie *NewZombie = newZombie("hamza");
    // Zombie *NewZombie1 = newZombie("h");
    // delete NewZombie1;
    delete NewZombie;
    NewZombie->announce();
}
