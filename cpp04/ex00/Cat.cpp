#include "Cat.hpp"


Cat::Cat(){
    type = "Cat";
    std::cout << "Cat Default Constructor Called\n";
}

Cat& Cat::operator=(const Cat& other){
    this->type = other.type;
    return *this;
}

Cat::Cat(const Cat& other){
    *this = other;
  std::cout << "Cat Copy Constructor Called\n";
}

Cat::~Cat(){
    std::cout << "Cat Destructor Called\n";
};