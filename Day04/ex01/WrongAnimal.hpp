#include <iostream>
#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

class wrongAnimal
{
    private:
    protected:
    std::string type;
    public:
    wrongAnimal();
    ~wrongAnimal();

    wrongAnimal(wrongAnimal const &other);
    wrongAnimal &operator=(wrongAnimal const &other);

    void makeSound() const;
    std::string getType(void) const;
};

#endif