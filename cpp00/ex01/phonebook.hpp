#ifndef _PHONEBOOK_
#define _PHONEBOOK_
#include "Contact.hpp"

class PhoneBook{
    private:
        Contact contact[8];
        int     Index;
    public:
        void Add_contact();
        void Search_contact();
        PhoneBook();
};

#endif