#include "Character.h"

Character::Character() {
    std::cout << "This is Character " << this->_name << " Default Constructor" << std::endl;
    for (size_t i = 0; i < 4; i++)
        this->inventory[i] = NULL;
}

Character::Character(std::string name): _name(name){
    std::cout << "This is Character " << this->_name << " Default Constructor" << std::endl;
    for (size_t i = 0; i < 4; i++)
        this->inventory[i] = NULL;
}

Character::Character(const Character &other) {
    std::cout << "Character " << other.getName() << " Copy Constructor Called" << std::endl;
    *this = other;
}

Character & Character::operator=(const Character &other) {
    std::cout << "Character " << other.getName() << " Assignement op Called" << std::endl;
    if(this != &other)
    {
        for (size_t i = 0; i < 4; i++)
        {
            if(this->inventory[i])
                delete this->inventory[i];
            if(other.inventory[i])
                this->inventory[i] = other.inventory[i]->clone();
        }
    }
    return (*this);
}

Character::~Character() {
    std::cout << "Character " << this->getName() << " Destructor Called" << std::endl;
    for (size_t i = 0; i < 4; i++)
        delete this->inventory[i];
    
}

std::string const & Character::getName() const {
    return this->_name;
}

void Character::equip(AMateria* m) {
    int i = 0;
    if(!m)
    {
        std::cout << "Nice trick but i can't add an empty inventory" << std::endl;
        return ;
    }
    while (this->inventory[i] && i < 4)
        i++;
    if(i < 4)
        this->inventory[i] = m;
    else
        std::cout << "Inventory is full" << std::endl;
}

void Character::unequip(int idx) {
    if(idx < 0 || idx > 3)
    {
        std::cout << "Wrong inventory index" << std::endl;
        return ;
    }
    if(!this->inventory[idx])
    {
        std::cout << "inventory is already empty" << std::endl;
        return ;
    }
    this->inventory[idx] = NULL;
    std::cout << "unequiped invertory of index: "<< idx << std::endl;
}

void Character::use(int idx, ICharacter& target) {
    if(idx < 0 || idx > 3)
    {
        std::cout << "Wrong inventory index" << std::endl;
        return ;
    }
    if(!this->inventory[idx])
    {
        std::cout << "inventory is empty.. nothig to be shown here" << std::endl;
        return ;
    }
    this->inventory[idx]->use(target);
}