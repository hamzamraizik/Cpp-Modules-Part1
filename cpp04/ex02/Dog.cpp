#include "Dog.hpp"

Dog::Dog(){
    type = "Dog";
    brain = new Brain;
    std::cout << "Dog Default Constructor Called\n";
}

Dog& Dog::operator=(const Dog& other){
    delete this->brain;
    this->brain = new Brain(*other.brain);
    this->type = other.type;
    return *this;
}

Dog::Dog(const Dog& other){
    this->brain = NULL;
    *this = other;
    std::cout << "Dog Copy Constructor Called\n";
}

Dog::~Dog(){
    delete brain;
    std::cout << "Dog Destructor Called\n";
};

void Dog::makeSound() const{
    std::cout << "Hooowwwww\n";
}
