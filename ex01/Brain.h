#ifndef BRAIN_H
#define BRAIN_H

#include <iostream>

class Brain {
    protected:
        std::string *ideas;   
    public:
        Brain();
        Brain(const Brain& other);
        Brain& operator=(const Brain& other);
        virtual ~Brain();
};

#endif