#include "FragTrap.hpp"

class DiamondTrap: public ScavTrap {
       DiamondTrap();
        DiamondTrap(std::string& name);
        DiamondTrap(DiamondTrap& other);
        DiamondTrap& operator=(DiamondTrap& other);
        ~DiamondTrap();
};
