#ifndef CHARACTER_H
#define CHARACTER_H

#include "ICharacter.h"

class Character: public ICharacter
{
    protected:
        AMateria    *inventory[4];
        AMateria    *unequipInventory[4];
        std::string const _name;
    public:
    Character();
    ~Character();
    Character(std::string name);
    Character(const Character &other);
    Character &operator=(const Character &other);
    std::string const & getName() const;
    void equip(AMateria* m);
    void unequip(int idx);
    void use(int idx, ICharacter& target);
};

#endif