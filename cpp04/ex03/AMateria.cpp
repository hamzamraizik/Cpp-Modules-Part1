#include "AMateria.hpp"


//ICharacter member functions:

ICharacter::ICharacter(){
    std::cout << "ICharacter Default constructor\n";
}

ICharacter::ICharacter(const ICharacter& other){
    *this = other;
    std::cout << "ICharacter Copy constructor\n";
}

ICharacter& ICharacter::operator=(const ICharacter& other)
{
    //  i need logical implementation
    return *this;
}

ICharacter::~ICharacter(){
    std::cout << "ICharacter Destructor\n";
}



// Character member functions:

Character::Character(){
    for (int i = 0; i < 4; i++){
        _inventory[i] = nullptr;
    }
    std::cout << "Character Default constructor\n";
}

Character& Character::operator=(const Character& other){
    if (this != &other)
    {
        for (int i = 0; i < 4; i++){
            if (_inventory[i] != nullptr) {
                delete _inventory[i];
                _inventory[i] = nullptr;
            }
        }
        // Copy the inventory
        for (int i = 0; i < 4; i++){
            if (other._inventory[i] != nullptr) {
                _inventory[i] = other._inventory[i]->clone();
            }
        }
        _name = other._name;
    }
    return *this;
}

Character::Character(const Character& other){
    *this = other;
    std::cout << "Character Copy constructor\n";
}

void Character::equip(AMateria* m){
    for (int i = 0; i < 4; i++){
        if (_inventory[i] == nullptr){
            _inventory[i] = m;
            return;
        }
    }
}

void Character::unequip(int idx){
    if (idx >= 0 && idx < 4){
        _inventory[idx] = nullptr;
    }
}

void Character::use(int idx, ICharacter& target){
    if (idx >= 0 && idx < 4 
        && _inventory[idx] != nullptr)
    {
        _inventory[idx]->use(target);
    }
}

AMateria::AMateria(){
    std::cout << "AMateria Default constructor\n";
}

AMateria::AMateria(const std::string& Type){
    type = Type;
    std::cout << "AMateria  constructor\n";
}
