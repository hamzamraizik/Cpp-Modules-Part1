#include <iostream>


int main(){
    std::string brain = "HI THIS IS BRAIN";

    std::string *stringPTR = &brain;
    std::string &stringREF = brain;
    std::cout << "&brain: " << &brain << std::endl;
    std::cout << "stringPTR: " << stringPTR << std::endl;
    std::cout << "&stringREF: " << &stringREF << std::endl;

    std::cout << brain << std::endl;
    *stringPTR = "hello there from ptr";
    std::cout << brain << std::endl;
    // std::cout << *stringPTR << std::endl;
    stringREF = "edited by reference";
    std::cout << brain << std::endl;
    // std::cout << stringREF << std::endl;
}