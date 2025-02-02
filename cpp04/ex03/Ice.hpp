#ifndef _ICE
#define _ICE

#include "ICharacter.hpp"
#include "AMateria.hpp"
#include "Cure.hpp"
#include "Ice.hpp"

class AMateria;

class Ice: public AMateria{
    public:
    // canonical form:
        Ice();
        Ice(const Ice& other);
        Ice& operator=(const Ice& other);
        ~Ice();

        // vertual functions definition:
        AMateria* clone() const;
        void use(ICharacter& target);

};


#endif