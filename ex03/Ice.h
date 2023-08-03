#ifndef ICE_H
#define ICE_H

#include "AMateria.h"

class Ice: public AMateria
{
    protected:

    public:
    Ice();
    ~Ice();
    Ice(const Ice &other);
    Ice &operator=(const Ice &other);
    std::string const & getType() const; //Returns the materia type
    Ice* clone() const;
    virtual void use(ICharacter& target);

};

#endif