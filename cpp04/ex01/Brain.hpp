#ifndef __BRAIN
#define __BRAIN
#include <iostream>

class Brain{
    public:
        Brain();
        Brain(const Brain& other);
        Brain& operator=(const Brain& other);
        ~Brain();
    protected:
        std::string ideas[100];
};


#endif
