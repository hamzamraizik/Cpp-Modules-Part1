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
        virtual ~Animal();

        virtual void makeSound() const;
        const std::string getType() const;
};

#endif