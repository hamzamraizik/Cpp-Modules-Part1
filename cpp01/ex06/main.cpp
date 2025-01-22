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

int main(int ac, char **av){
    if (ac != 2)
    {
        std::cout << "Wrong args!";
        return 1;
    }

    test.complain(av[1]);
};