#ifndef _FRAG_
#define _FRAG_

#include "ScavTrap.hpp"

class FragTrap: public ClapTrap{
    public:
        FragTrap();
        FragTrap(std::string& name);
        FragTrap(FragTrap& other);
        FragTrap& operator=(FragTrap& other);
        void highFiveGuys(void);
        ~FragTrap();
};

#endif //_FRAG_