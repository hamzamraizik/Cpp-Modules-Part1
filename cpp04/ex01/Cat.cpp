#include "Cat.hpp"

Cat::Cat(){
    type = "Cat";
    brain = new Brain;
    std::cout << "Cat Default Constructor Called\n";
}

Cat& Cat::operator=(const Cat& other){
     if (this != &other)
    {
        delete this->brain;
        this->brain = new Brain(*other.brain);
        this->type = other.type;
    }
    return *this;
}

Cat::Cat(const Cat& other){
    this->brain = NULL;
    *this = other;
  std::cout << "Cat Copy Constructor Called\n";
}

Cat::~Cat(){
    delete brain;
    std::cout << "Cat Destructor Called\n";
}

void Cat::makeSound() const{
    std::cout << "Mioww\n";
}
