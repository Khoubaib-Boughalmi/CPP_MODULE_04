#ifndef DOG_H
#define DOG_H

#include "Animal.h"

class Dog: public Animal
{
    private:

    public:
        Dog();
        ~Dog();
        void setType(std::string type);
};

#endif