#include "Ice.h"

Ice::Ice() {
    std::cout << "This is ICEEEEEEE Cold Default Constructor" << std::endl;
    this->_type = "ice";
}

Ice::Ice(const Ice &other) {
    std::cout << "Ice " << other.getType() << " Copy Constructor Called" << std::endl;
    *this = other;
}

Ice & Ice::operator=(const Ice &other) {
    std::cout << "Ice " << other.getType() << " Assignement op Called" << std::endl;
    if(this != &other)
        this->_type = other.getType();
    return (*this);
}

Ice::~Ice() {
    std::cout << "Ice Destructor Called" << std::endl;
}

std::string const & Ice::getType() const {
    return this->_type;
}

Ice* Ice::clone() const {
    return (new Ice);
}

void Ice::use(ICharacter& target) {
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
