#include "Brain.hpp"

Brain::Brain(){
    std::cout << "Brain Default Constructor called\n";
}

Brain& Brain::operator=(const Brain& other){
    std::cout << "Brain assignement operator Called\n";
    if (this != &other)
    {
        for (int i = 0; i < 100; i++){
            this->ideas[i] = other.ideas[i];
        }
    }
    return *this;
}

Brain::Brain(const Brain& other)
{
    *this = other;
    std::cout << "Brain Copy constructor called\n";
}

Brain::~Brain(){
    std::cout << "Brain Destructor called\n";
}