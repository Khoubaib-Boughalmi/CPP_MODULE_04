#ifndef ANIMAL_H
#define ANIMAL_H

class Animal {
    protected:
        std::string type;
        
    public:
        Animal();
        Animal(const Animal& animal);
        Animal& operator=(const Animal& animal);
        ~Animal();
        virtual void makeSound();
        virtual std::string getType();
}

#endif