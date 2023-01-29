#include "animal.hpp"
#include "dog.hpp"

Dog::Dog(void)
{
    std::cout << "Dog constructor called" << std::endl;
     this->type = "Dog";
}

Dog::~Dog()
{
    std::cout << "Dog destructor called" << std::endl;
}

void Dog::makeSound() const
{
    std::cout << "Waouf" << std::endl;
}

Dog::Dog(Dog const &other) : Animal(other) // Same as cat
{
    std::cout << "Copy Dog contructor called." << std::endl; 
    *this = other;
}

Dog &Dog::operator=(Dog const &other) // Superficial copy
{
    std::cout << "Copy Dog assignement operator called." << std::endl;
    if (this != &other)
        this->type = other.type;
    return *this;
}