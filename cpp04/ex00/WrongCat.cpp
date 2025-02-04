#include "WrongCat.hpp"

WrongCat::WrongCat(){
    type = "WrongCat";
    std::cout << "WrongCat Default Constructor Called\n";
}

WrongCat& WrongCat::operator=(const WrongCat& other){
    this->type = other.type;
    return *this;
}

WrongCat::WrongCat(const WrongCat& other){
    *this = other;
  std::cout << "WrongCat Copy Constructor Called\n";
}

WrongCat::~WrongCat(){
    std::cout << "WrongCat Destructor Called\n";
}

void WrongCat::makeSound() const{
    std::cout << "Mioww\n";
}