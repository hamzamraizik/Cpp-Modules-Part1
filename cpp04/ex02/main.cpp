#include "Dog.hpp"
#include "Cat.hpp"


int main()
{
    Dog dog;
    Dog d(dog);
    Dog d1;
    d1 = dog;

    Cat c;
    Cat c1(c);
    Cat c2 = c1;

    const Animal* animals[10];
    for ( int i = 0; i < 5; i++)
    {
        animals[i] = new Cat;
    }
    for ( int i = 5; i < 10; i++)
    {
        animals[i] = new Dog;
    }

    for ( int i = 0; i < 10; i++)
    {
        animals[i]->makeSound();
    }
    for ( int i = 0; i < 10; i++)
    {
        delete animals[i];
    }
}
