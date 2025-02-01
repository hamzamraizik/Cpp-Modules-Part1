#include "AMateria.hpp"
#include "MateriaSource.hpp"


void MateriaSource::learnMateria(AMateria* Template){
    for (int i = 0; i < 4; i++)
    {
        if (templates[i] == NULL){
            this->templates[i] = Template->clone();
            return;
        }
    }
}
AMateria* MateriaSource::createMateria(std::string const & type){
    for (int i = 0; i < 4; i++){
        if (templates[i] && templates[i]->getType() == type
        && (i == 3 || templates[i + 1] == NULL)){
            return templates[i]->clone();
        }
    }
    return NULL;
}
