#include "Dog.hpp"

Dog::Dog(){
    type = "Dog";
    brain = new Brain();
    std::cout << "Dog Default Constructor Called\n";
}

Dog& Dog::operator=(const Dog& other){
    this->type = other.type;
    this->brain = other.brain;
    return *this;
}

Dog::Dog(const Dog& other){
    this->brain = new Brain;
    *this = other;
  std::cout << "Dog Copy Constructor Called\n";
}

Dog::~Dog(){
    delete brain;
    std::cout << "Dog Destructor Called\n\n";
};

void Dog::makeSound() const{
    std::cout << "Hooowwwww\n";
}