#include "AMateria.hpp"
#include "MateriaSource.hpp"

MateriaSource::MateriaSource(){
    for (int i = 0; i < 4; i++)
    {
        templates[i] = NULL;
    }
}

MateriaSource::MateriaSource(const MateriaSource& other){
    if (this != &other){
        *this = other;
    }
}

MateriaSource& MateriaSource::operator=(const MateriaSource& other){
    if (this != &other)
    {
        for (int i = 0; i < 4; i++)
        {
            if (templates[i])
            {
                delete templates[i];
                templates[i] = NULL;
            }
        }
        for (int i = 0; i < 4; i++){
            if (other.templates[i] != NULL)
                templates[i] = other.templates[i]->clone();
        }
    }
    return *this;
}

MateriaSource::~MateriaSource(){
    for (int i = 0; i < 4; i++){
        delete (templates[i]);
    }
}

void MateriaSource::learnMateria(AMateria* m){
    for (int i = 0; i < 4; i++)
    {
        if (templates[i] == NULL){
            this->templates[i] = m;
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
