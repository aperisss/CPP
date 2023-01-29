#include "animal.hpp"
#include "cat.hpp"
#include "brain.hpp"

Cat::Cat(void)
{
    std::cout << "Cat constructor called" << std::endl;
    this->type = "Cat";
    this->cerveau = new Brain("caaaat");
}

Cat::~Cat()
{
    std::cout << "Cat destructor called" << std::endl;
    delete cerveau;
}

void Cat::makeSound() const
{
    std::cout << "Miaouw" << std::endl;
}

Cat::Cat(Cat const &other) : Animal(other)
{
    std::cout << "Copy Cat contructor called." << std::endl; 
    *this = other;
}

Cat &Cat::operator=(Cat const &other) // Assignement
{
    std::cout << "Copy Cat assignement operator called." << std::endl;
    if (this != &other)
    {
        this->type = other.type;
        this->cerveau = new Brain();
        *this->cerveau = *other.cerveau;
    }
    return *this;
}

void Cat::displayBrain(void) const{
    if (this->cerveau)
    {
        this->cerveau->DisplayBrain();
       std::cout << "aa" ;
    }
}