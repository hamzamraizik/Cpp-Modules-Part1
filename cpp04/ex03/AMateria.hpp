#ifndef _AMATERIA_
#define _AMATERIA_

#include "ICharacter.hpp"
#include <iostream>

class Icharacter;
class AMateria{
    protected:
        std::string type;
    public:
        /*Canonical form:*/
        AMateria();
        // AMateria(cosnt AMateria& other);
        // AMateria& operator=(cosnt AMateria& other);
        AMateria(const std::string& Type);
        virtual ~AMateria();

        std::string const & getType() const; // Returns the materia type
 
        virtual AMateria* clone() const = 0;
        virtual void use(ICharacter& target);
};

#endif