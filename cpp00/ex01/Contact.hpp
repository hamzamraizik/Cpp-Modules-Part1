#ifndef contact
#define contact

#include <iostream>
#include <iomanip>
#include <string>
//By default, class members in C++ are private. so i should 
// specify wich one is private and wich one is public

class Contact
{
    private:
        std::string First_name;
        std::string Last_name;
        std::string Nick_name;
        std::string Darkest_secret;
        std::string Phone_number;
    public:
    //seters
        void set_firstname(std::string firstname);
        void set_lastname(std::string lastname);
        void set_nickname(std::string nickname);
        void set_darkestsecret(std::string darkestsecret);
        void set_phonenumber(std::string phonenumber);
    //geters
        std::string get_FirstName();
        std::string get_LastName();
        std::string get_NickName();
        std::string get_DarkestSecret();
        std::string get_PhoneNumber();
};
#endif