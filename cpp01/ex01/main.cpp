#include "Zombie.hpp"

void ff(){
    system("leaks zombie");
}

int main(){

    size_t N = 8;
    atexit(ff);
    Zombie *test = zombieHorde(N, "hamza");

    for (size_t i = 0; i < N; i++){
        test->announce();
    }
    delete[] test;
}