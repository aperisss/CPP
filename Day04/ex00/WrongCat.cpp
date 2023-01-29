#include "wrongCat.hpp"

wrongCat::wrongCat()
{
    std::cout << "wrongCat constructor called" << std::endl;
}

wrongCat::~wrongCat()
{
    std::cout << "wrongCat destructor called" << std::endl;
}

wrongCat::wrongCat(wrongCat const &other) : wrongAnimal(other)
{
    std::cout << "Copy wwrongCat contructor called." << std::endl; 
}

wrongCat &wrongCat::operator=(wrongCat const &other)
{
    std::cout << "Copy wrongCat assignement operator called." << std::endl;
    if (this != &other)
        this->type = other.type;
    return *this;
}

void wrongCat::makeSound() const
{
    std::cout << "wrongCat noise" << std::endl;
}