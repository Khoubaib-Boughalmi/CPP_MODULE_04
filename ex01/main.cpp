#include "Animal.h"
#include "Dog.h"
#include "Cat.h"

int main()
{
    Cat catty;
    Cat catty2(catty);

    Dog doggy;
    Dog doggy2(doggy);

    return 0;
}
