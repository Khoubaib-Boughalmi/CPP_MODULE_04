#include "Cat.h"

Cat::Cat(): Animal() {
    std::cout << "Default Cat Constructor called" << std::endl;
    this->type = "Cat";
}

Cat::Cat(const Cat& other): Animal() {
    std::cout << "Cat Copy Constructor called" << std::endl;
    this->type = "Cat";
    *this = other;
}

Cat& Cat::operator=(const Cat& other) {
    if(this != &other)
    {
        this->type = other.type;
    }
    return (*this);
}

Cat::~Cat() {
    std::cout << "Cat Destructor called" << std::endl;
}

void Cat::makeSound() const {
    std::cout << "Default Cat Sound" << std::endl;
}

std::string Cat::getType(void) const {
    return (this->type);
}
