#include "Dog.h"

Dog::Dog(): Animal() {
    std::cout << "Default Dog Constructor called" << std::endl;
    this->type = "Dog";
}

Dog::Dog(const Dog& other): Animal(other) {
    std::cout << "Dog Copy Constructor called" << std::endl;
    *this = other;
}

Dog& Dog::operator=(const Dog& other) {
    if(this != &other)
        this->type = other.type;
    return (*this);
}

Dog::~Dog() {
    std::cout << "Dog Destructor called" << std::endl;
}

void Dog::makeSound() const {
    std::cout << "Default Dog Sound" << std::endl;
}

std::string Dog::getType(void) const {
    return (this->type);
}
