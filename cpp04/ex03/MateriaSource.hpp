#ifndef _MATERIASOURCE
#define _MATERIASOURCE
#include "AMateria.hpp"

class MateriaSource: public IMateriaSource{
    private:
        AMateria *templates[4];
    public:
        void learnMateria(AMateria* Template);
        AMateria* createMateria(std::string const & type);

};


#endif