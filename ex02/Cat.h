#ifndef CAT_H
#define CAT_H

#include "Animal.h"
#include "Brain.h"

class Cat: public Animal
{
    private:
        Brain *elGatoBrain;
    public:
        Cat();
        Cat(const Cat& other);
        Cat& operator=(const Cat& other);
        ~Cat();
        void makeSound() const;
        std::string getType(void) const;
        Brain *getBrain(void);
};

#endif