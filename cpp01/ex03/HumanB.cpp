#include "HumanB.hpp"

HumanB::HumanB(std::string Name){
    name = Name;
    WeaponB = NULL;
}

void HumanB::attack(void){
    if (!WeaponB) // it can be NULL
        return ;
    std::cout << name << " attacks with their " << HumanB::WeaponB->getType() << std::endl;
}

void HumanB::setWeapon(Weapon& WeaponToSet){
    WeaponB = &WeaponToSet;
}
HumanB::~HumanB(){

}
