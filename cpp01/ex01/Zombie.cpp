#include "Zombie.hpp"

Zombie::Zombie(){
}

Zombie::~Zombie(){
    std::cout << "destructor called\n";
}

void Zombie::announce(){
    std::cout << "[" << name << "]  ";
}
void Zombie::setName(std::string Newname){
    name = Newname;
}
