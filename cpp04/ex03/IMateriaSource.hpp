#ifndef _IMATERIASOURCE
#define _IMATERIASOURCE

#include "AMateria.hpp"

class IMateriaSource
{
    public:
        virtual ~IMateriaSource() {}
        virtual void learnMateria(AMateria*) = 0;
        virtual AMateria* createMateria(std::string const & type) = 0;
};

// class IMateriaSource{
//     public:
//         virtual AMateria* learnMateria(AMateria* m) = 0; 
//         //Clone m and store it in the first empty slot.
//         virtual AMateria* createMateria(std::string type) = 0;
//         // Clone the template matching type and return it.
// };


#endif