#include "Dog.h"

Dog::Dog() {
    std::cout << "Default Dog Constructor called" << std::endl;
}

Dog::Dog(const Dog& other) {
    std::cout << "Dog Copy Constructor called" << std::endl;
    *this = other;
}

Dog& Dog::operator=(const Dog& other) {
    if(this != &other)
    {
        this->type = other.type;
    }
    return (*this);
}

Dog::~Dog() {
    std::cout << "Dog Destructor called" << std::endl;
}

void Dog::setType(std::string type) {
    this->type = type;
}