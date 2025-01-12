#include "Harl.hpp"

int checkLevel(std::string str){
    std::string s = str;
    if (s == "DEBUG")
        return 1;
    else if (s == "INFO")
        return 2;
    else if (s == "WARNING")
        return 3;
    else if (s == "ERROR")
        return 4;
    return 0;
}


void Harl::debug(void){
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-\
ketchup burger. I really do!" << std::endl;
}
void Harl::info(void){
    std::cout << "cannot believe adding extra bacon costs more money. You didn’t put\
enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}
void Harl::warning(void){
    std::cout << "I think I deserve to have some extra bacon for free. I\'ve been coming for\
years whereas you started working here since last month." << std::endl;
}
void Harl::error(void){
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}




void Harl::complain(std::string level ){

    /// check if u must use pointers to function 
        //  elements in this excercice, if not, don't use it!!!

    void (Harl::*ptrs[4])(void) = {&Harl::error, &Harl::warning, 
        &Harl::info, &Harl::debug};

    switch (checkLevel(level))
    {
    case 1:
        debug();
    case 2:
        info();
    case 3:
        // (this->*ptrs[2])();
        warning();
    case 4:
        // (this->*ptrs[3])();
        error();
    default:
        std::cout << "not match any of levels!" << std::endl;
    };
}


int main(int ac, char **av){
    if (ac != 2)
    {
        std::cout << "wrong args!"; return 1;
    }
    Harl test;

    test.complain(av[1]);
};