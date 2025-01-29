#ifndef _AMATERIA_
#define _AMATERIA_

#include <iostream>

class ICharacter{
    protected:
        std::string _name;
        AMateria* _inventory[4];
    public:
        equip(AMateria* m);
}


class AMateria{
    protected:

    public:
        AMateria(std::string const & type);


        std::string const & getType() const; // Returns the materia type

        virtual AMateria* clone() const = 0;
        virtual void use(ICharacter& target);
};



class Ice: public AMateria{
    protected:
        std::string type;
        

};

class Cure: public AMateria{
    protected:
        std::string type;
    public:
        Cure();
        AMateria* clone() const;
        void use(ICharacter& target);

};

#endif