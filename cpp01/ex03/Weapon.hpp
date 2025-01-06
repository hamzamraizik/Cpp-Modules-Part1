#include <iostream>

class Weapon{
    private:
        std::string type;
    public:
        std::string& getType() const;
        void setType(std::string newType);
};


class HumanA{

};

class HumanB{

};