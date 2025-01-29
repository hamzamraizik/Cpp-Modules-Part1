#include "AMateria.hpp"

Cure::Cure(){
    type = "Cure";
}

AMateria* Cure::clone() const{
    return (new Cure(*this));
} 

void Cure::use(ICharacter& target){
    std::cout << "* heals " << type << "'s wounds *" << std::endl;
}