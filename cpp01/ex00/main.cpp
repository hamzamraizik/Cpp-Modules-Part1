#include "Zombie.hpp"

int main(){
    Zombie *NewZombie = newZombie("hamza");
    // Zombie *NewZombie1 = newZombie("h");
    // delete NewZombie1;
    delete NewZombie;
    NewZombie->announce();
}
