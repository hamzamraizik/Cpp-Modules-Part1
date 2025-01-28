#include "Dog.hpp"

Dog::Dog(){
    type = "Dog";
    std::cout << "Dog Default Constructor Called\n";
}

Dog& Dog::operator=(const Dog& other){
    this->type = other.type;
    return *this;
}

Dog::Dog(const Dog& other){
    *this = other;
  std::cout << "Dog Copy Constructor Called\n";
}

Dog::~Dog(){
    std::cout << "Dog Destructor Called\n";
};