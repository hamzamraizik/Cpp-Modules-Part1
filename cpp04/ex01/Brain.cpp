#include "Brain.hpp"

Brain::Brain(){
}

Brain& Brain::operator=(const Brain& other){
    std::cout << "Brain assignement operator Called\n";
    for (int i = 0; i < 100; i++){
        this->ideas[i] = other.ideas[i];
    }
    return *this;
}

Brain::Brain(const Brain& other){
    *this = other;
}

Brain::~Brain(){
}