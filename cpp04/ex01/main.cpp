#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    const Animal* cats = new Cat[10];
    const Cat cattt();
    // const Animal* dogs = new Dog[10];
    // for (int i = 0; i < 9; i++){
    //     const Animal *ptr = &cats[i];
    //     delete ptr;
    // }
    // for (int i = 0; i < 9; i++){
    //     const Animal *ptr = &dogs[i];
    //     delete ptr;
    // }
    delete[] cats;
    // delete[] dogs;
}
