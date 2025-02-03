#ifndef _CURE_
#define _CURE_

#include "ICharacter.hpp"
#include "AMateria.hpp"
#include "Cure.hpp"
#include "Ice.hpp"

class AMateria;

class Cure: public AMateria{
    public:
        Cure();
        Cure(const Cure& other);
        Cure& operator=(const Cure& other);
        virtual ~Cure();

        AMateria* clone() const;
        void use(ICharacter& target);

};


#endif