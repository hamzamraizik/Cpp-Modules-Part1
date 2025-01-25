#include "ClapTrap.hpp"

ClapTrap::ClapTrap(ClapTrap& copyOne){
    *this = copyOne;
}

ClapTrap& ClapTrap::operator=(ClapTrap& other){
    this->Name = other.Name;
    this->HitPoints = other.HitPoints;
    this->AttackDamage = other.AttackDamage;
    this->EnergyPoints = other.EnergyPoints;
    return *this;
}

ClapTrap::ClapTrap(std::string& name){
    Name = name;
    HitPoints = 10;
    EnergyPoints = 10;
    AttackDamage = 0;
    std::cout << name << " Created!\n";
}

void ClapTrap::attack(const std::string& target){
    if (!HitPoints || !EnergyPoints)
        return ;
    EnergyPoints--;
    std::cout << "ClapTrap " <<  Name << " attacks " << target << \
        ", causing " << AttackDamage <<  " points of damage!\n";
};

void ClapTrap::takeDamage(unsigned int amount){
    if (!HitPoints || !EnergyPoints || (HitPoints - amount <= 0))
        return ;
    HitPoints -= amount;
    std::cout << "ClapTrap " <<  Name << " Takes " << 
        amount <<  " points of damage!\n";
};

void ClapTrap::beRepaired(unsigned int amount){
    if (!HitPoints || !EnergyPoints)
        return ;
    std::cout << "has Repaired with " << amount << " points.\n";
    HitPoints += amount;
    EnergyPoints--;
}

ClapTrap::ClapTrap(){
    std::cout << "Default constructor called\n";
}

ClapTrap::~ClapTrap(){
    std::cout << Name << " says Goodbye!\n";
}
