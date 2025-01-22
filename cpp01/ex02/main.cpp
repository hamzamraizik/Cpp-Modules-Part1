#include <iostream>

int main(){
    std::string brain = "HI THIS IS BRAIN";

    std::string *stringPTR = &brain;
    std::string &stringREF = brain;
    std::cout << "\n&brain    : " << &brain << "\n";
    std::cout << "stringPTR : " << stringPTR << "\n";
    std::cout << "&stringREF: " << &stringREF << "\n";

    std::cout << "\nThe value of the string variable  :  " << brain << "\n";
    std::cout << "The value pointed to by stringPTR :  " << *stringPTR << "\n";
    std::cout << "The value pointed to by stringREF :  " <<  stringREF << "\n";
}