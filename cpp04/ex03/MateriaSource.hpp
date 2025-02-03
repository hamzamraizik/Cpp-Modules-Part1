#ifndef _MATERIASOURCE_HPP
#define _MATERIASOURCE_HPP

#include "Character.hpp"
#include "AMateria.hpp"
#include "IMateriaSource.hpp"

class MateriaSource: public IMateriaSource{
    private:
        AMateria *templates[4];
    public:
        //Canonical form:
        MateriaSource();
        virtual ~MateriaSource();
        MateriaSource(const MateriaSource& other);
        MateriaSource& operator=(const MateriaSource& other);
        void learnMateria(AMateria* m);
        AMateria* createMateria(std::string const & type);

};


#endif