#ifndef CAT_H
#define CAT_H

#include "Animal.h"

class Cat: public Animal
{
    private:

    public:
        Cat();
        Cat(const Cat& other);
        Cat& operator=(const Cat& other);
        ~Cat();
        void makeSound() const;
        std::string getType(void) const;
};

#endif