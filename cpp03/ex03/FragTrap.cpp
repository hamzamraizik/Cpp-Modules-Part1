#include "FragTrap.hpp"

void FragTrap::highFiveGuys(){
    std::cout << "FragTrap " << Name << " requested high fives request\n";
}

FragTrap& FragTrap::operator=(FragTrap& other){
    this->Name = other.Name;
    this->HitPoints = other.HitPoints;
    this->AttackDamage = other.AttackDamage;
    this->EnergyPoints = other.EnergyPoints;
    return *this;
}

FragTrap::FragTrap(FragTrap& other){
    *this = other;
}


FragTrap::FragTrap(){
    std::cout << "FragTrap has created!\n";
}

FragTrap::FragTrap(std::string& name){
    Name = name;
    HitPoints = 100;
    EnergyPoints = 100;
    AttackDamage = 30;
    std::cout << "FragTrap constructor is called\n";
}

FragTrap::~FragTrap(){
    std::cout << "FragTrap Destructor called\n";
}
