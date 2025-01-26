#ifndef _DIAMOND_
#define _DIAMOND_

#include "FragTrap.hpp"

class DiamondTrap: public FragTrap, virtual public ScavTrap{
        private:
                std::string diamondName;
        public:

                DiamondTrap();
                void whoAmI();
                DiamondTrap(std::string& name);
                DiamondTrap(DiamondTrap& other);
                DiamondTrap& operator=(DiamondTrap& other);
                void attack(std::string& target);
                ~DiamondTrap();
};

#endif