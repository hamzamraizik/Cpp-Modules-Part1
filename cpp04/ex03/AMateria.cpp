#include "AMateria.hpp"

AMateria::AMateria(){
    std::cout << "AMateria Default constructor\n";
}

AMateria::AMateria(const std::string& Type){
    type = Type;
    std::cout << "AMateria  constructor\n";
}

void AMateria::use(ICharacter& target){
    std::cout << "AMateria use " << target.getName() << std::endl;
}

std::string const & AMateria::getType() const {
    return type;
}

AMateria::~AMateria(){
    
}
