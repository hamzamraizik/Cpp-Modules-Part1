#ifndef _MATERIASOURCE
#define _MATERIASOURCE
#include "ICharacter.hpp"
#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "IMateriaSource.hpp"

class MateriaSource: public IMateriaSource{
    private:
        AMateria *templates[4];
    public:
        MateriaSource();
        void learnMateria(AMateria* Template);
        AMateria* createMateria(std::string const & type);

};


#endif