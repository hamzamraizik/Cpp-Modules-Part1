#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(){
}

DiamondTrap::~DiamondTrap(){

}

void DiamondTrap::attack(std::string& target){
    ScavTrap::attack(target);
}

DiamondTrap::DiamondTrap(std::string& name){
    diamondName = name;
    Name = name += "_clap_name";
}

DiamondTrap& DiamondTrap::operator=(DiamondTrap& other){
    this->Name = other.Name;
    this->diamondName = other.Name;
    this->HitPoints = FragTrap::HitPoints;
    this->EnergyPoints = ScavTrap::EnergyPoints;
    this->AttackDamage = FragTrap::AttackDamage;
    return *this;
}

DiamondTrap::DiamondTrap(DiamondTrap& other){
    *this = other;
}

void DiamondTrap::whoAmI(void){
    std::cout << "Diamond name: " << diamondName << "Clap name:" << Name;
}

