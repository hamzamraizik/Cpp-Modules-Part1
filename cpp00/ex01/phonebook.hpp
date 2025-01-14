#include "Contact.hpp"

//By default, class members in C++ are private. so i should 
// specify wich one is private and wich one is public

class Phonebook{
    private:
        Contact Contacts[8];
        int     Index;
    public:
        void Add_contact();
        void Search_contact();
        Phonebook();
};
