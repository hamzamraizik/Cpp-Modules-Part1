#ifndef _CLAP_
#define _CLAP_

#include <iostream>

class ClapTrap{
    private:
        std::string  Name;
        unsigned int HitPoints;
        unsigned int EnergyPoints;
        unsigned int AttackDamage;
    public:
        ClapTrap();
        ClapTrap(std::string& name);
        ClapTrap(ClapTrap& copyOne);
        ClapTrap& operator=(ClapTrap& other);
        ~ClapTrap();
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
};

#endif
