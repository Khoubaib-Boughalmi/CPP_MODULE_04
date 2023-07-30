#include "WrongCat.h"

WrongCat::WrongCat(): WrongAnimal() {
    std::cout << "Default WrongCat Constructor called" << std::endl;
    this->type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat& other): WrongAnimal(other) {
    std::cout << "WrongCat Copy Constructor called" << std::endl;
    *this = other;
}

WrongCat& WrongCat::operator=(const WrongCat& other) {
    if(this != &other)
        this->type = other.type;
    return (*this);
}

WrongCat::~WrongCat() {
    std::cout << "WrongCat Destructor called" << std::endl;
}

void WrongCat::makeSound() const {
    std::cout << "Default WrongCat Sound" << std::endl;
}

std::string WrongCat::getType(void) const {
    return (this->type);
}
