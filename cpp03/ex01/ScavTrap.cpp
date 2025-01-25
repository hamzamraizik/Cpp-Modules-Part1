#ifndef _SCAV_
#define _SCAV_
#include "ScavTrap.hpp"

ScavTrap::ScavTrap(ScavTrap& other){
    *this = other;
}

ScavTrap& ScavTrap::operator=(ScavTrap& other){
    this->Name = other.Name;
    this->HitPoints = other.HitPoints;
    this->AttackDamage = other.AttackDamage;
    this->EnergyPoints = other.EnergyPoints;
    return *this;
}

ScavTrap::ScavTrap(){
    std::cout << "ScavTrap Default constructor\n";
}

ScavTrap::ScavTrap(std::string& UpdatedName){
    Name = UpdatedName;
    HitPoints = 100;
    EnergyPoints = 50;
    AttackDamage = 20;
    std::cout << "derrived constructor called.\n";
}

ScavTrap::~ScavTrap(){
    std::cout << "ScavTrap says: Goodbye!\n";
}

void ScavTrap::guardGate(){
    std::cout << "The ScavTrap is now in Gate keeper mode\n";
}

void ScavTrap::attack(std::string& target){
    if (!HitPoints || !EnergyPoints)
        return ;
    EnergyPoints--;
    std::cout << "ClapTrap " <<  Name << " attacks " << target << \
        ", causing " << AttackDamage <<  " points of damage!\n";
}

#endif //_SCAV_