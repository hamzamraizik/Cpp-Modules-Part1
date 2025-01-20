#include "Utils.hpp"

// Phonebook Class functions definition :

PhoneBook::~PhoneBook(){

}

void PhoneBook::Add_contact()
{
    std::string buffer;
    buffer = get_input("enter First Name");
    if (buffer == ""){
        std::cout << "EOF\n";
        return ;
    }
    contact[Index % 8].set_firstname(buffer);
    buffer = get_input("enter Last Name");
    if (buffer == "")
    {
        std::cout << "EOF\n";
        return ;
    }
    contact[Index % 8].set_lastname(buffer);

     buffer = get_input("enter Nick Name");
    if (buffer == "")
    {
        std::cout << "EOF\n";
        return ;
    }
    contact[Index % 8].set_nickname(buffer);

     buffer = get_input("enter darkest secret");
    if (buffer == "")
    {
        std::cout << "EOF\n";
        return ;
    }
    contact[Index % 8].set_darkestsecret(buffer);
    buffer = is_valid_num(get_input("enter phone number"));
    if (buffer == ""){
        std::cout << "EOF\n";
        return ;}
    contact[Index % 8].set_phonenumber(buffer);
    Index = (++Index % 8);
}


void    PhoneBook::Search_contact(){
    Print_header();
     for (int i = 0; i < 8; i++){
        std::cout << std::right << std::setw(10) << i << "|";
        std::cout << std::right << std::setw(10) << ParseIt(contact[i].get_FirstName()) << "|";
        std::cout << std::right << std::setw(10) << ParseIt(contact[i].get_LastName()) << "|";
        std::cout << std::right << std::setw(10) << ParseIt(contact[i].get_NickName()) << "|\n"; 
    }
    std::string choice;
    if (!getline(std::cin, choice)){
        return ;
    }
    if (choice.length() > 1 || CheckIfEmpty(choice) || (choice[0] < '0' || choice[0] > '7')){
        std::cout << "Wrong Index\n";
        return ;
    }
    int x = choice[0] - '0';
    DisplayContact(contact[x]);
}
