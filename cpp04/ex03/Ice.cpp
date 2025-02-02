#include "AMateria.hpp"
#include "Ice.hpp"

Ice::Ice(){
    type = "ice";
}

Ice::Ice(const Ice& other){
    *this = other;
}

Ice& Ice::operator=(const Ice& other){
    this->type = other.type;
    return *this;
}

Ice::~Ice(){
}

AMateria* Ice::clone() const{
    return (new Ice(*this));
}

void Ice::use(ICharacter& target){
    std::cout << "* shoots an ice bolt at "  << target.getName() << " *\n";
}
