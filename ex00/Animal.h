#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>

class Animal {
    protected:
        std::string type;
        
    public:
        Animal();
        Animal(const Animal& other);
        Animal& operator=(const Animal& other);
        ~Animal();
        virtual void makeSound();
        virtual std::string getType();
};

#endif