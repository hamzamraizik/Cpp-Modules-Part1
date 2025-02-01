#include "AMateria.hpp"

Cure::Cure(){
    type = "Cure";
    std::cout << "Cure Default constructor\n";
}

Cure::Cure(const Cure& other){
    *this = other;
}

Cure& Cure::operator=(const Cure& other){
    this->type = other.type;
}

Cure::~Cure(){
    std::cout << "Cure Destructor\n" << std::endl;
}

AMateria* Cure::clone() const{
    std::cout << "Cure object cloned\n";
    return (new Cure(*this));
}

void Cure::use(ICharacter& target){
    std::cout << "* heals " << type << "'s wounds *" << std::endl;
}
