#include "brain.hpp"

Brain::Brain(void)
{
    std::cout << "Brain default constructor called" << std::endl;
}

Brain::Brain(std::string idea)
{
    std::cout << "Brain constructor called" << std::endl;
    for(int i = 0; i < 100; i++)
        ideas[i] = idea;
}

Brain::Brain(Brain const &other){
    std::cout << "Brain copy constructor called" << std::endl;
    for (int i = 0; i < 100; i++)
        ideas[i] = other.ideas[i];
}

Brain &Brain::operator=(Brain const &other){
    std::cout << "Brain copy assignement operator called" << std::endl;
    if(this != &other)
        for (int i = 0; i < 100; i++)
            ideas[i] = other.ideas[i];
    return *this;
}

Brain::~Brain()
{
    std::cout << "Brain destructor called" << std::endl;
}

void Brain::DisplayBrain()
{
    for(int i = 0; i < 100; i++)
        std::cout << this->ideas[i]  << "aa" << std::endl;
}