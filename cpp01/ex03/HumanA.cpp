#include "HumanA.hpp"


void HumanA::attack(void){
    std::cout << name << " attacks with their " << HumanA::weaponA.getType() << "\n";
};

HumanA::HumanA(std::string Name, Weapon& weaponToSet): weaponA(weaponToSet), name(Name){
};

HumanA::~HumanA(){}
