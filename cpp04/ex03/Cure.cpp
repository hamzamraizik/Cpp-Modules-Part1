#include "AMateria.hpp"
#include "Cure.hpp"

Cure::Cure(){
    type = "cure";
    std::cout << "Cure Default constructor\n";
}

Cure::Cure(const Cure& other){
    *this = other;
}

Cure& Cure::operator=(const Cure& other){
    this->type = other.type;
    return *this;
}

Cure::~Cure(){
    std::cout << "Cure Destructor\n" << std::endl;
}

AMateria* Cure::clone() const{
    // std::cout << "Cure object cloned\n";
    return (new Cure(*this));
}

void Cure::use(ICharacter& target){
    std::cout << "\n\n\n* heals " << target.getName() << "'s wounds *\n\n\n\n" << std::endl;
}
