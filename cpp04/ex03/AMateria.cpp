#include "AMateria.hpp"

AMateria::AMateria(){
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
