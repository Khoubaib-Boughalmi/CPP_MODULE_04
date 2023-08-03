#include "Dog.h"

Dog::Dog() {
    std::cout << "Default Dog Constructor called" << std::endl;
    this->type = "Dog";
    this->elPerroBrain = new Brain();
    for (size_t i = 0; i < 100; i++)
        this->elPerroBrain->ideas[i] = "me gusta el pescado";    
}

Dog::Dog(const Dog& other) {
    std::cout << "Dog Copy Constructor called" << std::endl;
    this->elPerroBrain = new Brain(*(other.elPerroBrain));
    *this = other;
}

Dog& Dog::operator=(const Dog& other) {
    if(this != &other)
    {
        for (int i = 0; i < 100; i++)
            this->elPerroBrain->ideas[i] = other.elPerroBrain->ideas[i];                
        this->type = other.type;
    }
    return (*this);
}

Dog::~Dog() {
    std::cout << "Dog Destructor called" << std::endl;
    delete this->elPerroBrain;
}

void Dog::makeSound() const {
    std::cout << "Default Dog Sound" << std::endl;
}

std::string Dog::getType(void) const {
    return (this->type);
}

Brain* Dog::getBrain(void) {
    return (this->elPerroBrain);
}
