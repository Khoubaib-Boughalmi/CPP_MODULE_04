#include "Brain.h"


Brain::Brain() {
    std::cout << "Brain Default Constructor Called" << std::endl;
}

Brain::Brain(const Brain& other) {
    std::cout << "Brain Copy Constructor Called" << std::endl;
    for (size_t i = 0; i < 100; i++)
    {
        this->ideas = new std::string [100];
    }
}

Brain& Brain::operator=(const Brain& other) {
    if(this != &other)
    {
        for (size_t i = 0; i < 100; i++)
            this->ideas[i] = other.ideas[i];
    }
    return (*this);
}

Brain::~Brain() {
    std::cout << "Brain destructor Called" << std::endl;
    delete this->ideas;
}

