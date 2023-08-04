#include "Animal.h"
#include "Dog.h"
#include "Cat.h"

int main()
{
    Cat catty;
    Animal *cattyPtr = new Cat();
    Cat catty2(catty);
    Cat catty3 = catty;

    Dog doggy;
    Animal *doggyPtr = new Dog();
    Dog doggy2(doggy);
    Dog doggy3 = doggy;
    delete cattyPtr;
    delete doggyPtr;
    return 0;
}
