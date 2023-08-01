#include "Cat.h"

Cat::Cat() {
    std::cout << "Default Cat Constructor called" << std::endl;
    this->type = "Cat";
    this->elGatoBrain = new Brain();
    for (size_t i = 0; i < 100; i++)
        this->elGatoBrain->ideas[i] = "me gusta el pescado";    
}

Cat::Cat(const Cat& other) {
    std::cout << "Cat Copy Constructor called" << std::endl;
    this->elGatoBrain = new Brain(*(other.elGatoBrain));
    *this = other;
}

Cat& Cat::operator=(const Cat& other) {
    if(this != &other)
    {
        for (int i = 0; i < 100; i++)
            this->elGatoBrain->ideas[i] = other.elGatoBrain->ideas[i];                
        this->type = other.type;
    }
    return (*this);
}

Cat::~Cat() {
    std::cout << "Cat Destructor called" << std::endl;
    delete this->elGatoBrain;
}

void Cat::makeSound() const {
    std::cout << "Default Cat Sound" << std::endl;
}

std::string Cat::getType(void) const {
    return (this->type);
}

Brain* Cat::getBrain(void) {
    return (this->elGatoBrain);
}
