#include "Weapon.hpp"
#ifndef _HUMAN_B_
#define _HUMAN_B_

class HumanB{
    private:
        Weapon      *WeaponB;
        std::string  name;
    public:
        HumanB(std::string Name);
        ~HumanB();
        void setWeapon(Weapon &WeaponToSet);
        void attack();
};

#endif