#include "WrongAnimal.h"

WrongAnimal::WrongAnimal() {
    std::cout << "Default WrongAnimal Constructor called" << std::endl;
    this->type = "WrongAnimal";
}

WrongAnimal::WrongAnimal(const WrongAnimal& other) {
    std::cout << "WrongAnimal Copy Constructor called" << std::endl;
    *this = other;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other) {
    if(this != &other)
        this->type = other.type;
    return (*this);
}

WrongAnimal::~WrongAnimal() {
    std::cout << "WrongAnimal Destructor called" << std::endl;
}

void WrongAnimal::makeSound() const {
    std::cout << "Default WrongAnimal Sound" << std::endl;
}

std::string WrongAnimal::getType() const {
    return (this->type);
}
