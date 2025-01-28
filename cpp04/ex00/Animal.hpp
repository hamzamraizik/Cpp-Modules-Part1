#ifndef _ANIMAL_
#define _ANIMAL_
#include <iostream>

class Animal{
    protected:
        std::string type;
    public:
        Animal();
        Animal(const Animal& other);
        Animal& operator=(const Animal& other);
        ~Animal();

        void makeSound(const std::string type);
        std::string getType();
};

#endif