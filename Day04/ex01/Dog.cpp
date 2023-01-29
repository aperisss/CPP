#include "animal.hpp"
#include "dog.hpp"
#include "brain.hpp"

Dog::Dog(void)
{
    std::cout << "Dog constructor called" << std::endl;
    this->type = "Dog";
    this->cerveau = new Brain("ddoooogg");
}

Dog::~Dog()
{
    std::cout << "Dog destructor called" << std::endl;
    delete cerveau;
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
    {
        this->type = other.type;
        this->cerveau = new Brain();
        *this->cerveau = *other.cerveau;
    }
    return *this;
}

void Dog::displayBrain(void) const {
    if (this->cerveau)
        this->cerveau->DisplayBrain(); // Comme c'est un pointeur sur Brain il peut aller recuperer
}