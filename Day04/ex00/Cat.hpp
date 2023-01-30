#include "Animal.hpp"

#ifndef CAT_HPP
#define CAT_HPP

class Cat : public Animal
{
    private:
    protected :
    public:
    Cat(void);
    ~Cat();

    Cat(Cat const &other);
    Cat &operator=(Cat const &other);

    virtual void makeSound() const;
};

#endif