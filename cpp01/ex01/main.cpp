#include "Zombie.hpp"

int main(){

    int N = 8;
    Zombie *test;

    test = zombieHorde(N, "hamza");
    for (int i = 0; i < N; i++){
        test[i].announce();
    }
    delete[] test;
}