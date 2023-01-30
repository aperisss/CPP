#include "Animal.hpp"

Animal::Animal(void)
{
    std::cout << "Animal constructor called" << std::endl;
    this->type = "Animal";
}

Animal::~Animal()
{
    std::cout << "Animal destructor called" << std::endl;
}

void Animal::makeSound() const
{
    std::cout << "Animal" << std::endl;
}

std::string Animal::getType(void) const
{
    return this->type;
}

Animal::Animal(Animal const &other) // Copy
{
    std::cout << "Copy Animal " << this->getType() << " contructor called." << std::endl;
    *this = other;
}

Animal &Animal::operator=(Animal const &other) // Assignement
{
    std::cout << "Copy Animal " << this->type << " assignement operator called." << std::endl;
    if (this != &other)
        this->type = other.type;
    return *this;
}