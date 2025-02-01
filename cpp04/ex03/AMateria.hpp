#ifndef _AMATERIA_
#define _AMATERIA_
#include "ICharacter.hpp"
#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "IMateriaSource.hpp"
#include <iostream>

class AMateria{
    protected:
        std::string type;
    public:
        /*Canonical form:*/
        AMateria();
        // AMateria(cosnt AMateria& other);
        // AMateria& operator=(cosnt AMateria& other);
        // ~AMateria();
        AMateria(const std::string& Type);

        std::string const & getType() const; // Returns the materia type
 
        virtual AMateria* clone() const = 0;
        virtual void use(ICharacter& target);
};

#endif