#include "Weapon.hpp"

Weapon::Weapon(std::string name){
    setType(name);
}


void Weapon::setType(std::string newType){
    type = newType;
}

void HumanA::attack(void){
    std::cout << name << " attacks with their " << HumanA::weaponA.getType() << std::endl;
};

void HumanB::attack(void){
    std::cout << name << " attacks with their " << HumanB::WeaponB->getType() << std::endl;
};

HumanA::HumanA(std::string typeToSet, Weapon& weaponToSet): weaponA(weaponToSet), name(typeToSet){
};

HumanB::HumanB(std::string Name){
    name = Name;
    WeaponB = NULL;
};

void HumanB::setWeapon(Weapon& WeaponToSet){
    WeaponB = &WeaponToSet;
}


const std::string& Weapon::getType(){
    return type;
}

HumanA::~HumanA(){}

int main(){
    {
        Weapon club = Weapon("crude spiked club");
        HumanA bob("Bob", club);
        bob.attack();
        club.setType("some other type of club");
        bob.attack();
    }
    {
        Weapon club = Weapon("crude spiked club");
        HumanB jim("Jim");
        jim.setWeapon(club);
        jim.attack();
        club.setType("some other type of club");
        jim.attack();
    }
return 0;
}