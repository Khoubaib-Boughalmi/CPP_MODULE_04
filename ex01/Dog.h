#ifndef DOG_H
#define DOG_H

#include "Animal.h"
#include "Brain.h"

class Dog: public Animal
{
    private:
        Brain *elPerroBrain;
    public:
        Dog();
        Dog(const Dog& other);
        Dog& operator=(const Dog& other);
        ~Dog();
        void makeSound() const;
        std::string getType(void) const;
};

#endif