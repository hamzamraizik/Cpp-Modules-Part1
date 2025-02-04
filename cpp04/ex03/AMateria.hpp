#ifndef _AMATERIA_
#define _AMATERIA_

#include "ICharacter.hpp"
#include <iostream>

class AMateria{
    protected:
        std::string type;
    public:
        AMateria();
        AMateria(const std::string& Type);
        AMateria(const AMateria& other);
        AMateria& operator=(const AMateria& other);
        virtual ~AMateria();

        std::string const & getType() const;
 
        virtual AMateria* clone() const = 0;
        virtual void use(ICharacter& target);
};

#endif