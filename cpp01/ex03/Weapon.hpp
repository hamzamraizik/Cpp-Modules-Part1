#include <iostream>

class Weapon{
    private:
        std::string type;
    public:
        Weapon(std::string name);
        const std::string& getType();
        void setType(std::string newType);
};

class HumanA{
    private:
        Weapon&      weaponA;
        std::string name;
    public:
        HumanA(std::string typeToSet, Weapon& weaponToSet);
        void attack();
        ~HumanA();
};

class HumanB{
    private:
        Weapon      *WeaponB;
        std::string name;
    public:
        HumanB(std::string Name);
        void setWeapon(Weapon &WeaponToSet);
        void attack();
};
