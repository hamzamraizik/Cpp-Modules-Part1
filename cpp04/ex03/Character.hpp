#ifndef CHARACTER_
#define CHARACTER_

#include <iostream>
#include "ICharacter.hpp"
class AMateria;
class ICharacter;

class Character: public ICharacter{
    protected:
        std::string _name;
        AMateria*   _inventory[4];
    public:
    /* Canonical form :*/
        Character();
        Character(const std::string Name);
        Character(const Character& other);
        Character& operator=(const Character& other);
        ~Character();

        /*other member functions: */
        std::string const& getName() const;
        void equip(AMateria* m); 
        // Add to the first empty slot.
        void unequip(int idx); 
        // Remove Materia at idx (but don’t delete it!).
        void use(int idx, ICharacter& target); 
        // Use the Materia at idx on target.
};

#endif