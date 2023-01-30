#include <iostream>
#include "wrongAnimal.hpp"

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

class wrongCat : public wrongAnimal
{
       private:
    public:
    std::string type;
    wrongCat();
    ~wrongCat();
    wrongCat(wrongCat const &other);
    wrongCat &operator=(wrongCat const &other);

    void makeSound() const;

};

#endif