#include "AMateria.hpp"

AMateria::AMateria(){
    type = "";
}

AMateria::AMateria(const AMateria& other){
    *this = other;
}

AMateria& AMateria::operator=(const AMateria& other){
    if (this != &other){
        type = other.type;
    }
    return *this;
}

AMateria::AMateria(const std::string& Type){
    type = Type;
}

void AMateria::use(ICharacter& target){
    std::cout << "AMateria use " << target.getName() << std::endl;
}

std::string const & AMateria::getType() const {
    return type;
}

AMateria::~AMateria(){
}
