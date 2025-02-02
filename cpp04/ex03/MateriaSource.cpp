#include "AMateria.hpp"
#include "MateriaSource.hpp"

MateriaSource::MateriaSource(){
    for (int i = 0; i < 4; i++)
    {
        templates[i] = NULL;
    }
    
}

void MateriaSource::learnMateria(AMateria* Template){
    for (int i = 0; i < 4; i++)
    {
        if (templates[i] == NULL){
            this->templates[i] = Template;
            return;
        }
    }
}

AMateria* MateriaSource::createMateria(std::string const & type){
    for (int i = 0; i < 4; i++)
    {
        if (templates[i] && templates[i]->getType() == type){
            return templates[i]->clone();
        }
    }
    return NULL;
}

MateriaSource::~MateriaSource(){
    for (int i = 0; i < 4; i++){
        delete (templates[i]);
    }
}
