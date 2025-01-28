#ifndef _DOG
#define _DOG
#include "Animal.hpp"
#include "Brain.hpp"

class Dog: public Animal{
    private:
        Brain *brain;
    public:
        Dog();
        Dog(const Dog& other);
        Dog& operator=(const Dog& other);
        ~Dog();

        void makeSound() const;
};

#endif