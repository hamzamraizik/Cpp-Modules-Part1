#include "Zombie.hpp"

void Zombie::announce(void){
    std::cout << name << ": BraiiiiiiinnnzzzZ...\n ";
}

void Zombie::setName(std::string randomName){
    name = randomName;
}
Zombie::~Zombie(){
    std::cout << name  << " destroyed.\n";
}