#include "animal.hpp"
#include "brain.hpp"

#ifndef CAT_HPP
#define CAT_HPP

class Cat : public Animal
{
    private:
    Brain *cerveau;
    protected :
    public:
    Cat(void);
    ~Cat();

    Cat(Cat const &other);
    Cat &operator=(Cat const &other);

    virtual void makeSound() const;
    virtual void displayBrain() const;
};

#endif