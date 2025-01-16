#include "Utils.hpp"

// Contact Class methods definition ***************
void Contact::set_firstname(std::string firstname){
    First_name = firstname;
}

void Contact::set_lastname(std::string lastname){
    Last_name = lastname;
}

void Contact::set_nickname(std::string nickname){
    Nick_name = nickname;
}

void Contact::set_darkestsecret(std::string darkestsecret){
    Darkest_secret = darkestsecret;
}

void Contact::set_phonenumber(std::string phonenumber){
    Phone_number = phonenumber;
}

std::string Contact::get_FirstName(){
    return First_name;
}

std::string Contact::get_LastName(){
    return Last_name;
}

std::string Contact::get_NickName()
{
    return Nick_name;
}

std::string Contact::get_DarkestSecret(){
    return (Darkest_secret);
}

std::string Contact::get_PhoneNumber(){
    return (Phone_number);
}
