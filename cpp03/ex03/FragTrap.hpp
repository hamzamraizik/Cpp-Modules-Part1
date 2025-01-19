#ifndef _FRAG_
#define _FRAG_

#include "ScavTrap.hpp"

class FragTrap: virtual public ScavTrap{
    public:
        FragTrap();
        FragTrap(std::string& name);
        FragTrap(FragTrap& other);
        FragTrap& operator=(FragTrap& other);
        void highFiveGuys(void);
        ~FragTrap();
};

#endif //_FRAG_