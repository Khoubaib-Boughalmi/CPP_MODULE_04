#include "Dog.h"

Dog::Dog() {
    std::cout << "Default Dog Constructor called" << std::endl;
    this->type = "Dog";
    this->elGatoBrain = new Brain();
    for (size_t i = 0; i < 100; i++)
        this->elGatoBrain->ideas[i] = "me gusta el pescado";    
}

Dog::Dog(const Dog& other) {
    std::cout << "Dog Copy Constructor called" << std::endl;
    this->elGatoBrain = new Brain(*(other.elGatoBrain));
    *this = other;
}

Dog& Dog::operator=(const Dog& other) {
    if(this != &other)
    {
        for (int i = 0; i < 100; i++)
            this->elGatoBrain->ideas[i] = other.elGatoBrain->ideas[i];                
        this->type = other.type;
    }
    return (*this);
}

Dog::~Dog() {
    std::cout << "Dog Destructor called" << std::endl;
    delete this->elGatoBrain;
}

void Dog::makeSound() const {
    std::cout << "Default Dog Sound" << std::endl;
}

std::string Dog::getType(void) const {
    return (this->type);
}

Brain* Dog::getBrain(void) {
    return (this->elGatoBrain);
}
