#include "Cure.h"

Cure::Cure() {
    std::cout << "This is Cure Default Constructor" << std::endl;
    this->_type = "cure";
}

Cure::Cure(const Cure &other) {
    std::cout << "Cure " << other.getType() << " Copy Constructor Called" << std::endl;
    *this = other;
}

Cure & Cure::operator=(const Cure &other) {
    std::cout << "Cure " << other.getType() << " Assignement op Called" << std::endl;
    if(this != &other)
        this->_type = other.getType();
    return (*this);
}

Cure::~Cure() {
    std::cout << "Cure Destructor Called" << std::endl;
}

std::string const & Cure::getType() const {
    return this->_type;
}

Cure* Cure::clone() const {
    return (new Cure);
}

void Cure::use(ICharacter& target) {
    std::cout << "* heals " << target.getName() << "’s wound  *" << std::endl;
}
