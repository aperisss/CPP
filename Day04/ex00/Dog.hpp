#include "Animal.hpp"

#ifndef DOG_HPP
#define DOG_HPP

class Dog : public Animal
{
    private:
    protected :
    public:
    Dog(void);
    ~Dog();
    Dog(Dog const &other);
    Dog &operator=(Dog const &other);

    virtual void makeSound() const;
};

#endif