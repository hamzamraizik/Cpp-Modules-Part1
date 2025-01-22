#ifndef _HUMAN_A_
#define _HUMAN_A_
#include "Weapon.hpp"

class HumanA{
    private:
        Weapon&      weaponA;
        std::string  name;
    public:
        HumanA(std::string Name, Weapon& weaponToSet);
        void attack();
        ~HumanA();
};

#endif