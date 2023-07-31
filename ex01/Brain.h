#ifndef BRAIN_H
#define BRAIN_H

#include <iostream>

class Brain {
    public:
        std::string ideas[100];   
        Brain();
        Brain(const Brain& other);
        Brain& operator=(const Brain& other);
        virtual ~Brain();
};

#endif