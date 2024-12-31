#include "PhoneBook.hpp"

// Contact Class methods definition ***************
void Contact::set_firstname(std::string firstname){
    First_name = firstname;
};
void Contact::set_lastname(std::string lastname){
    Last_name = lastname;
};
void Contact::set_nickname(std::string nickname){
    Nick_name = nickname;
};
void Contact::set_darkestsecret(std::string darkestsecret){
    Darkest_secret = darkestsecret;
};
void Contact::set_phonenumber(std::string phonenumber){
    Phone_number = phonenumber;
};

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
//************************************************* */
// Phonebook Class methods definition :

int CheckIfEmpty(std::string s)
{
    size_t i = 0;
    while (s[i] && s[i] == ' ')
    {
        i++;
    }
    if (i == s.length())
        return 1;
    return 0;
}

std::string get_input(std::string to_display){
    while (true)
    {
        std::string buffer;
        std::cout << to_display << std::endl;
        if (!getline(std::cin, buffer)){
            std::cout << "end of file reached!" << std::endl;
            return "";
        }
        if (CheckIfEmpty(buffer)){
            std::cout << "invalid!" << std::endl;
            continue;
        }
        return buffer;
    }
}
int isNumber(std::string buffer){
    for (size_t i = 0; i < buffer.length(); i++){
        if (!isdigit(buffer[i]))
            return 0;
    }
    return 1;
}
std::string is_valid_num(std::string input){
    
    std::string buffer = input;
    if (!isNumber(buffer)){
       while (true)
        {
            std::cout << "Number Not Valid!" << std::endl;
            buffer = get_input("Enter Phone Number:");
            if (buffer == "")
                return "";
            if (isNumber(buffer))
                return (buffer);
        }
    }
    return (input);
}

void Phonebook::Add_contact(){
    if (Index == 8)
        Index = 0;
    std::string buffer;

    buffer = get_input("enter First Name");
    if (buffer == ""){
        std::cout << "EOF" << std::endl;return ;}
    Contacts[Index % 8].set_firstname(buffer);


    buffer = get_input("enter Last Name");
    if (buffer == ""){
        std::cout << "EOF" << std::endl;return ;}
    Contacts[Index % 8].set_lastname(buffer);


     buffer = get_input("enter Nick Name");
    if (buffer == ""){
        std::cout << "EOF" << std::endl;return ;}
    Contacts[Index % 8].set_nickname(buffer);

     buffer = get_input("enter darkest secret");
    if (buffer == ""){
        std::cout << "EOF" << std::endl;return ;}
    Contacts[Index % 8].set_darkestsecret(buffer);
    buffer = is_valid_num(get_input("enter phone number"));
    if (buffer == ""){
        std::cout << "EOF" << std::endl;return ;}
    Contacts[Index % 8].set_phonenumber(buffer);
    Index++;
}
void Print_header()
{
    std::cout << std::left << std::setw(10) << "Index" << "|";
    std::cout << std::left << std::setw(10) << "First Name" << "|";
    std::cout << std::left << std::setw(10) << "Last Name" << "|";
    std::cout << std::left << std::setw(10) << "Nick Name" << "|" << std::endl;
    std::cout << std::left << std::setw(10) << "---------" << "|";
    std::cout << std::left << std::setw(10) << "---------" << "|";
    std::cout << std::left << std::setw(10) << "---------" << "|";
    std::cout << std::left << std::setw(10) << "---------" << "|" << std::endl;
}

std::string ParseIt(std::string Name)
{
    if (Name.length() > 8)
        return (Name.substr(0, 9) + ".");
    return (Name);
}



void DisplayContact(Contact user){
    if (user.get_FirstName()== ""){
        std::cout << "empty One!" << std::endl;
        return; }

    std::cout << std::left << std::setw(10) << "Index" << "|";
    std::cout << std::left << std::setw(10) << "First Name" << "|";
    std::cout << std::left << std::setw(10) << "Last Name" << "|";
    std::cout << std::left << std::setw(10) << "Nick Name" << "|";
    std::cout << std::left << std::setw(10) << "Secret" << "|";
    std::cout << std::left << std::setw(10) << "Phone Num" << "|" 
                    << std::endl;
    std::cout << std::left << std::setw(10) << "---------" << "|";
    std::cout << std::left << std::setw(10) << "---------" << "|";
    std::cout << std::left << std::setw(10) << "---------" << "|";
    std::cout << std::left << std::setw(10) << "---------" << "|";
    std::cout << std::left << std::setw(10) << "---------" << "|";
    std::cout << std::left << std::setw(10) << "---------" << "|"
                << std::endl;

    
    std::cout << std::setw(10) << user.get_FirstName() << "|";
    std::cout << std::setw(10) << user.get_LastName() << "|";
    std::cout << std::setw(10) << user.get_NickName() << "|";
    std::cout << std::setw(10) << user.get_DarkestSecret() << "|";
    std::cout << std::setw(10) << user.get_PhoneNumber() << "|" << std::endl;
}

void    Phonebook::Search_contact(){
    
    Phonebook test;

    Print_header();
     for (int i = 0; i < Index && i < 8; i++){
        std::cout << std::setw(10) << i << "|";
        std::cout << std::setw(10) << ParseIt(Contacts[i].get_FirstName()) << "|";
        std::cout << std::setw(10) << ParseIt(Contacts[i].get_LastName()) << "|";
        std::cout << std::setw(10) << ParseIt(Contacts[i].get_NickName()) << "|" 
        << std::endl;
    }
    std::string choice;
    if (!getline(std::cin, choice)){
        return ;
    }
    if (choice.length() > 1 || CheckIfEmpty(choice) || (choice[0] < '0' || choice[0] > '7')){
        std::cout << "Wrong Index" << std::endl;
        return ;
    }
    int x = choice[0] - '0';
    DisplayContact(Contacts[x]);
}
//eof 
//getline >>
int main()
{
    Phonebook Contactt;
    while (true)
    {
        std::cout << "Select from:\n1 --> Add\n" << "2 --> Search\n" 
            << "3 --> EXIT" << std::endl;
        std::string input;
        if (!getline(std::cin, input, '\n')){
            std::cout << "EOF reached!!" << std::endl;
            return 0;
        }if (CheckIfEmpty(input)){
            std::cout << "empty line!" << std::endl;
            continue;
        }if (input == "1")
            Contactt.Add_contact();
        else if (input == "2")
            Contactt.Search_contact();
        else if (input == "3"){
            std::cout << "Goodbye!" << std::endl;
            return 0;
        }else{
            std::cout << "note implemented yet!" << std::endl;
            continue;
        }
    }
}
//setw colonne 10 caracteres 
//trunacate string substr 10 caracteres sssssssssss.