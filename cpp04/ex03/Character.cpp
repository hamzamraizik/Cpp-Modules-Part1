#include "Character.hpp"
#include "AMateria.hpp"
Character::Character(){
    for (int i = 0; i < 4; i++){
        _inventory[i] = NULL;
    }
    std::cout << "Character Default constructor\n";
}

Character::~Character(){
    for (int i = 0; i < 4; i++){
        if (_inventory[i]){
            delete _inventory[i];
            _inventory[i] =  NULL;
        }
    }
    std::cout << "Character Destructor called\n";
}

Character::Character(const std::string Name){
    _name = Name;
    for (int i = 0; i < 4; i++){
        _inventory[i] = NULL;
    }
    std::cout << "Character Copy constructor\n";
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
        // Copying the inventory
        for (int i = 0; i < 4; i++){
            if (other._inventory[i] != NULL) {
                _inventory[i] = other._inventory[i]->clone();
            }
        }
        _name = other._name;
    }
    return *this;
}

Character::Character(const Character& other){
    *this = other;
    std::cout << "Character Copy Constructor\n";
}

void Character::equip(AMateria* m){
    for (int i = 0; i < 4; i++){
        if (_inventory[i] == NULL){
            _inventory[i] = m;
            std::cout << "an AMateria has been equiped.\n";
            return ;
        }
    }
}

void Character::unequip(int idx){
    if (idx >= 0 && idx < 4){
        _inventory[idx] = NULL;
        std::cout << "an AMateria has been unequiped.\n";
    }
}

void Character::use(int idx, ICharacter& target){
    if (idx >= 0 && idx < 4 && _inventory[idx] != NULL)
    {
        std::cout << "\nCharacter use() called\n";
        _inventory[idx]->use(target);
        return;
    }
    else
        std::cout << "Not a valid idx!!\n";
}

std::string const& Character::getName() const{
    return _name;
}
