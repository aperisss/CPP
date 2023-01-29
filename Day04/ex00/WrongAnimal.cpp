#include "wrongAnimal.hpp"

wrongAnimal::wrongAnimal()
{
    this->type = "wrongAnimal";
    std::cout << "wrongAnimal constructor called" << std::endl;
}

wrongAnimal::~wrongAnimal()
{
    std::cout << "wrongAnimal destructor called" << std::endl;
}

void wrongAnimal::makeSound() const
{
    std::cout << "wrongAnimal noise" << std::endl;
}

std::string wrongAnimal::getType(void) const
{
    return this->type;
}

wrongAnimal::wrongAnimal(wrongAnimal const &other) // Copy
{
    std::cout << "Copy wrongAnimal " << this->getType() << " contructor called." << std::endl;
    *this = other;
}

wrongAnimal &wrongAnimal::operator=(wrongAnimal const &other) // Assignement
{
    std::cout << "Copy wrongAnimal " << this->type << " assignement operator called." << std::endl;
    if (this != &other)
        this->type = other.type;
    return *this;
}