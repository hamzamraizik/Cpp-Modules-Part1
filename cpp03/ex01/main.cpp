#include "ClapTrap.hpp"

int main(){
    std::string name = "Hamza";
    ClapTrap a(name);
    a.attack("Mizoo");
    a.takeDamage(5);
    a.beRepaired(2);

}