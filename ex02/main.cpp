#include "Animal.h"
#include "Dog.h"
#include "Cat.h"

int main()
{
    Animal *cat = new Cat();
    Animal *dog = new Dog();
    cat->makeSound();
    dog->makeSound();
    delete cat;
    delete dog;
    return 0;
}
