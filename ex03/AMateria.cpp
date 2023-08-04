#include "AMateria.h"

AMateria::AMateria() {
    // std::cout << "AMateria Default Constructor" << std::endl;
    this->_type = "undefined";
}
AMateria::AMateria(std::string const & type) {
    // std::cout << "AMateria Named Constructor" << std::endl;
    this->_type = type;
}

AMateria::AMateria(const AMateria &other) {
    // std::cout << "AMateria Copy Constructor" << std::endl;
    this->_type = other._type;
}

// AMateria & AMateria::operator=(const AMateria &other) {}

AMateria::~AMateria() {
    // std::cout << "AMateria destructor" << std::endl;
}

std::string const & AMateria::getType() const {
    return this->_type;
}

void AMateria::use(ICharacter& target) {
    (void)target;
	// std::cout << "AMateria is used on " << target.getName() << std::endl;
}