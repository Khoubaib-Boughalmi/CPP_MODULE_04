#include "MateriaSource.h"

MateriaSource::MateriaSource() {
    std::cout << "This is MateriaSource Default Constructor" << std::endl;
}

MateriaSource::MateriaSource(const MateriaSource &other) {
    std::cout << "MateriaSource Copy Constructor Called" << std::endl;
    *this = other;
}

MateriaSource & MateriaSource::operator=(const MateriaSource &other) {
    std::cout << "MateriaSource Assignement op Called" << std::endl;
    if(this != &other)
    {

    }
    return (*this);
}

MateriaSource::~MateriaSource() {
    std::cout << "MateriaSource Destructor Called" << std::endl;
}

void MateriaSource::learnMateria(AMateria* passedMateria) {
    int i = 0;
    if(!passedMateria)
    {
        std::cout << "Can't add nonexisting source" << std::endl;
        return ;
    }
    while (this->learnMateriaInventory[i] && i < 4)
        i++;
    if(i > 3)
    {
        std::cout << "No more space left in Materia Source" << std::endl;
        return ;
    }
    this->learnMateriaInventory[i] = passedMateria;
    std::cout << "Added a new Materia Source to the inventory" << std::endl;
}

AMateria* MateriaSource::createMateria(std::string const & type) {
    // AMateria *newMateria = AMateria;

}