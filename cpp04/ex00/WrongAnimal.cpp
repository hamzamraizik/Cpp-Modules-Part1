#include "WrongAnimal.hpp"


WrongAnimal::WrongAnimal(){
    type = "";
    std::cout << "WrongAnimal Default Constructor called\n";
}

WrongAnimal::~WrongAnimal(){
    std::cout << "WrongAnimal Destructor called\n";
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other){
    if (this != &other)
        this->type = other.type;
    return *this;
}

WrongAnimal::WrongAnimal(const WrongAnimal& other){
    *this = other;
    std::cout << "WrongAnimal Copy Constructor Called\n";
}

void  WrongAnimal::makeSound() const{
    std::cout << "WrongAnimal Sound\n";
}

const std::string WrongAnimal::getType() const{
    return type;
}
