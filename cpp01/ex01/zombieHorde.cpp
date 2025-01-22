#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name ){
    if (N <= 0)
        return NULL;
    Zombie *arr = new Zombie[N];

    for (int i = 0; i < N; i++){
        arr[i].setName(name);
    }
    return arr;
}

