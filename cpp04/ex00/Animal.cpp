#include "Animal.hpp"

Animal::Animal(){
    type = "";
    std::cout << "Animal Default Constructor called\n";
}

Animal::~Animal(){
    std::cout << "Animal Destructor called\n";
}

Animal& Animal::operator=(const Animal& other){
    this->type = other.type;
    return *this;
}

Animal::Animal(const Animal& other){
    *this = other;
    std::cout << "Animal Copy Constructor Called\n";
}

void  Animal::makeSound(const std::string type){
    std::cout << "Animal says : " << type;
}

std::string Animal::getType(){
    return type;
}