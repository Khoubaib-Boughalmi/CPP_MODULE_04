#ifndef CURE_H
#define CURE_H

#include "AMateria.h"

class Cure: public AMateria
{
    protected:

    public:
    Cure();
    ~Cure();
    Cure(const Cure &other);
    Cure &operator=(const Cure &other);
    std::string const & getType() const; //Returns the materia type
    Cure* clone() const;
    virtual void use(ICharacter& target);

};

#endif