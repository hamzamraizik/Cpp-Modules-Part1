#include "Animal.hpp"

Animal::Animal(){
    type = "";
    std::cout << "Animal Default Constructor called\n";
}

Animal::~Animal(){
    std::cout << "Animal Destructor called\n";
}

Animal& Animal::operator=(const Animal& other){
    if (this != &other)
        this->type = other.type;
    return *this;
}

Animal::Animal(const Animal& other){
    *this = other;
    std::cout << "Animal Copy Constructor Called\n";
}

void  Animal::makeSound() const{
    std::cout << "Animal Sound\n";
}

const std::string Animal::getType() const{
    return type;
}