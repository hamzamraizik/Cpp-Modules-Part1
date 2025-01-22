#include "Zombie.hpp"

int main(){
    Zombie *NewZombie = newZombie("hamza");
    randomChump("Random1");
    NewZombie->announce();
    randomChump("Random2");
    delete NewZombie;
}
