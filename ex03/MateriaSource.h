# ifndef MATERIASOURCE_H
# define MATERIASOURCE_H

#include "IMateriaSource.h"

class MateriaSource
{
    private:
        AMateria *learnMateriaInventory[4];
    public:
    MateriaSource();
    ~MateriaSource();
    MateriaSource(std::string name);
    MateriaSource(const MateriaSource &other);
    MateriaSource &operator=(const MateriaSource &other);
    void learnMateria(AMateria* passedMateria);
    AMateria* createMateria(std::string const & type);
};

# endif