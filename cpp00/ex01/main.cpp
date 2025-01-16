#include "Utils.hpp"

PhoneBook::PhoneBook(){
    Index = 0;
}

int CheckIfEmpty(std::string s)
{
    size_t i = 0;
    while (s[i] && s[i] == ' ')
        i++;
    if (i == s.length())
        return 1;
    return 0;
}

std::string get_input(std::string to_display){
    std::string buffer;
    while (true)
    {
        std::cout << to_display << "\n";
        if (!getline(std::cin, buffer)){
            std::cout << "EOF reached!\n";
            return "";
        }
        if (CheckIfEmpty(buffer)){
            std::cout << "invalid!\n";
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
            std::cout << "Number Not Valid!\n";
            buffer = get_input("Enter Phone Number:");
            if (buffer == "")
                return "";
            if (isNumber(buffer))
                return (buffer);
        }
    }
    return (input);
}

void    Print_header()
{
    std::cout << std::setw(10) << "Index" << "|";
    std::cout << std::setw(10) << "First Name" << "|";
    std::cout << std::setw(10) << "Last Name" << "|";
    std::cout << std::setw(10) << "Nick Name" << "|\n";
    std::cout << std::setw(10) << "---------" << "|";
    std::cout << std::setw(10) << "---------" << "|";
    std::cout << std::setw(10) << "---------" << "|";
    std::cout << std::setw(10) << "---------" << "|\n";
}

std::string ParseIt(std::string Name)
{
    if (Name.length() > 8)
        return (Name.substr(0, 9) + ".");
    return (Name);
}

void DisplayContact(Contact user){
    if (user.get_FirstName()== ""){
        std::cout << "empty One!\n";
        return; }

    std::cout  << std::setw(10) << "Index" << "|";
    std::cout  << std::setw(10) << "First Name" << "|";
    std::cout << std::setw(10) << "Last Name" << "|";
    std::cout << std::setw(10) << "Nick Name" << "|";
    std::cout << std::setw(10) << "Secret" << "|";
    std::cout << std::setw(10) << "Phone Num" << "|\n";
    std::cout << std::setw(10) << "---------" << "|";
    std::cout << std::setw(10) << "---------" << "|";
    std::cout << std::setw(10) << "---------" << "|";
    std::cout << std::setw(10) << "---------" << "|";
    std::cout << std::setw(10) << "---------" << "|";
    std::cout << std::setw(10) << "---------" << "|\n";

    std::cout << std::setw(10) << user.get_FirstName() << "|";
    std::cout << std::setw(10) << user.get_LastName() << "|";
    std::cout << std::setw(10) << user.get_NickName() << "|";
    std::cout << std::setw(10) << user.get_DarkestSecret() << "|";
    std::cout << std::setw(10) << user.get_PhoneNumber() << "|\n";
}

int main()
{
    PhoneBook   phonebook;
    std::string input;

    while (true){
        std::cout << "Select from:\n1 --> ADD\n" << "2 --> SEARCH\n" 
            << "3 --> EXIT\n";
        if (!getline(std::cin, input)){
            std::cout << "EOF reached!!\n";
            return 0;
        }if (CheckIfEmpty(input)){
            std::cout << "Empty Line!\n";
            continue;
        }if (input == "ADD")
            phonebook.Add_contact();
        else if (input == "SEARCH")
            phonebook.Search_contact();
        else if (input == "EXIT"){
            std::cout << "Goodbye!\n";
            return 0;
        }else{
            std::cout << "Command NOT Valid!\n";
            continue;
        }
    }
}
