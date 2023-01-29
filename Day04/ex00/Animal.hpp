#include <iostream>
#ifndef ANIMAL_HPP
#define ANIMAL_HPP

class Animal
{
    private:
    protected :
    std::string type;
    public:
    Animal(void);
    ~Animal();

    Animal(Animal const &other);
    Animal &operator=(Animal const &other);
    virtual void makeSound() const;
    std::string getType(void) const;
};

#endif