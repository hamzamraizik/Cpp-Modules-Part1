#include "Zombie.hpp"

void Zombie::setName(std::string Newname){
    name = Newname;
}

Zombie::Zombie(){
}


Zombie::~Zombie(){
    std::cout << "destructor called\n";
}

void Zombie::announce(){
    std::cout << "[" << name << "]  ";
}

Zombie* zombieHorde( int N, std::string name ){
    Zombie *ZombieArr = new Zombie[N];

    for (int i = 0; i < N; i++){
        ZombieArr[i].setName(name);
    }
    return ZombieArr;
}

void ff(){
    system("leaks a.out");
}

int main(){

    size_t N = 8;
    atexit(ff);
    Zombie *test = zombieHorde(N, "hamza");

    for (int i = 0; i < N; i++){
        test->announce();
    }
    delete[] test;
}