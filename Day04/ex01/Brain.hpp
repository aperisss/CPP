#include "animal.hpp"

#ifndef BRAIN_HPP
#define BRAIN_HPP

class Brain
{
    private:
    public:
    std::string ideas[100];
    Brain(void);
    Brain(std::string ideas);
    ~Brain();
    Brain(Brain const &other);
    Brain &operator=(Brain const &other);

    void DisplayBrain();

};

#endif