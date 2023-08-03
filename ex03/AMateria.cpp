#include "AMateria.h"

AMateria::AMateria() {}
AMateria::AMateria(std::string const & type) {}
AMateria::AMateria(const AMateria &other) {}
AMateria & AMateria::operator=(const AMateria &other) {}
AMateria::~AMateria() {}
std::string const & AMateria::getType() const {
    return this->_type;
}
void AMateria::use(ICharacter& target) {
    
}