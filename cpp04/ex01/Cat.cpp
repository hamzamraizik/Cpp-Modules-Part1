#include "Cat.hpp"


Cat::Cat(){
    type = "Cat";
    brain = new Brain();
    std::cout << "Cat Default Constructor Called\n";
}

Cat& Cat::operator=(const Cat& other){
    this->type = other.type;
    (*brain) = *(other.brain);
    return *this;
}

Cat::Cat(const Cat& other){
    this->brain = new Brain;
    *this = other;
  std::cout << "Cat Copy Constructor Called\n";
}

Cat::~Cat(){
    delete brain;
    std::cout << "Cat Destructor Called\n\n";
}

void Cat::makeSound() const{
    std::cout << "Mioww\n";
}
