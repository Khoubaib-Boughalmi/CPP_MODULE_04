#include "Animal.h"

Animal::Animal() {
    std::cout << "Default Animal Constructor called" << std::endl;
    this->type = "Animal";
}

Animal::Animal(const Animal& other) {
    std::cout << "Animal Copy Constructor called" << std::endl;
    *this = other;
}

Animal& Animal::operator=(const Animal& other) {
    if(this != &other)
        this->type = other.type;
    return (*this);
}

Animal::~Animal() {
    std::cout << "Animal Destructor called" << std::endl;
}

void Animal::makeSound() const {
    std::cout << "Default Animal Sound" << std::endl;
}

std::string Animal::getType() const {
    return (this->type);
}
