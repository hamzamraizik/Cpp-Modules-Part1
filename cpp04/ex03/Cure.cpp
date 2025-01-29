#include "AMateria.hpp"

Cure::Cure(){
    std::cout << "Cure Default constructor\n";
    type = "Cure";
}

AMateria* Cure::clone() const{
    std::cout << "Cure object cloned\n";
    return (new Cure(*this));
} 

void Cure::use(ICharacter& target){
    std::cout << "* heals " << type << "'s wounds *" << std::endl;
}