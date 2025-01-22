#include "Weapon.hpp"

Weapon::Weapon(){
}
Weapon::~Weapon(){
}

Weapon::Weapon(std::string name){
    setType(name);
}

void Weapon::setType(std::string newType){
    type = newType;
}

const std::string& Weapon::getType(){
    return type;
}
