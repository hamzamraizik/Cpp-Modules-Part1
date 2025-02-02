#include "AMateria.hpp"
#include "Cure.hpp"

Cure::Cure(){
    type = "cure";
}

Cure::Cure(const Cure& other){
    *this = other;
}

Cure& Cure::operator=(const Cure& other){
    this->type = other.type;
    return *this;
}

Cure::~Cure(){
}

AMateria* Cure::clone() const{
    return (new Cure(*this));
}

void Cure::use(ICharacter& target){
    std::cout << "* heals " << target.getName() << "'s wounds *\n";
}
