#ifndef _CURE_
#define _CURE_

#include "AMateria.hpp"

class Cure: public AMateria{
    public:
    // canonical form:
        Cure();
        Cure(const Cure& other);
        Cure& operator=(const Cure& other);
        ~Cure();

        // vertual functions definition:
        AMateria* clone() const;
        void use(ICharacter& target);

};


#endif