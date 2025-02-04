#ifndef  _WRONGANIMAL_HPP
#define  _WRONGANIMAL_HPP
#include <iostream>

class WrongAnimal{
    protected:
        std::string type;
    public:
        WrongAnimal();
        WrongAnimal(const WrongAnimal& other);
        WrongAnimal& operator=(const WrongAnimal& other);
        ~WrongAnimal();

        void makeSound() const;
        const std::string getType() const;
};


#endif