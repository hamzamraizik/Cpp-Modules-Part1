#ifndef WEAPON_
#define WEAPON_
#include <iostream>

class Weapon{
    private:
        std::string type;
    public:
        Weapon();
        ~Weapon();
        Weapon(std::string name);
        const std::string& getType();
        void setType(std::string newType);
};

#endif