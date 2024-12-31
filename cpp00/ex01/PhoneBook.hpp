#include "Contact.hpp"

class Phonebook{
    private:
        Contact Contacts[8];
        int Index;
    public:
        void Add_contact();
        void Search_contact();
    Phonebook(){Index = 0;};
};
