#ifndef _DOG
#define _DOG
#include "Animal.hpp"

class Dog: public Animal{
    public:
        Dog();
        Dog(const Dog& other);
        Dog& operator=(const Dog& other);
        ~Dog();
};

#endif