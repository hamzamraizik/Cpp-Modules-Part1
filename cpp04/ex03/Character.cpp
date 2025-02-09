#include "Character.hpp"
#include "AMateria.hpp"


Character::Character()
{
    for (int i = 0; i < 4; i++){
        _inventory[i] = NULL;
    }
}

Character::Character(const Character& other){
    *this = other;
}

Character::Character(const std::string& Name){
    _name = Name;
    for (int i = 0; i < 4; i++){
        _inventory[i] = NULL;
    }
}

Character& Character::operator=(const Character& other){
    if (this != &other)
    {
        for (int i = 0; i < 4; i++){
            if (_inventory[i] != NULL) {
                delete _inventory[i];
                _inventory[i] = NULL;
            }
        }
        for (int i = 0; i < 4; i++){
            if (other._inventory[i] != NULL) {
                _inventory[i] = other._inventory[i]->clone();
            }
        }
        _name = other._name;
    }
    return *this;
}


void Character::equip(AMateria* m){
    for (int i = 0; i < 4; i++){
        if (_inventory[i] == NULL){
            _inventory[i] = m;
            return ;
        }
    }
}

void Character::unequip(int idx){
    if (idx >= 0 && idx < 4){
        _inventory[idx] = NULL;
    }
}

void Character::use(int idx, ICharacter& target){
    if (idx >= 0 && idx < 4 && _inventory[idx] != NULL)
    {
        _inventory[idx]->use(target);
        return;
    }
}

std::string const& Character::getName() const{
    return _name;
}

Character::~Character(){
    for (int i = 0; i < 4; i++){
        if (_inventory[i]){
            delete _inventory[i];
        }
    }
}
