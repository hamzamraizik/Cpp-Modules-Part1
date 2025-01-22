#include "Harl.hpp"

void Harl::debug(void){
    std::cout << "[ WARNING ]\nI love having extra bacon for my 7XL-double-cheese-triple-pickle-special-\
ketchup burger. I really do\n\n";
}

void Harl::info(void){
    std::cout << "[ INFO ]\ncannot believe adding extra bacon costs more money. You didn’t put\
enough bacon in my burger! If you did, I wouldn’t be asking for more!\n\n";
}

void Harl::warning(void){
    std::cout << "[ WARNING ]\nI think I deserve to have some extra bacon for free.\n I\'ve been coming for\
years whereas you started working here since last month.\n\n";
}

void Harl::error(void){
    std::cout << "[ ERROR ]\nThis is unacceptable! I want to speak to the manager now.\n\n";
}


void Harl::complain(std::string level ){
    switch (checkLevel(level))
    {
    case 1:
        debug();
    case 2:
        info();
    case 3:
        warning();
    case 4:
        error();
    default:
        std::cout << "[ Probably complaining about insignificant problems ]\n";
    };
}

