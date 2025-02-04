#ifndef CHARACTER_
#define CHARACTER_

#include "ICharacter.hpp"
#include "AMateria.hpp"
class ICharacter;

class Character: public ICharacter{
    protected:
        std::string _name;
        AMateria*   _inventory[4];
    public:
        Character();
        Character(const std::string& Name);
        Character(const Character& other);
        Character& operator=(const Character& other);
        ~Character();

        std::string const& getName() const;
        void equip(AMateria* m); 
        void unequip(int idx); 
        void use(int idx, ICharacter& target); 
};

#endif