#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
int main()
{
    const wrongAnimal* meta = new wrongAnimal();
    const wrongAnimal* i = new wrongCat();
    std::cout << i->getType() << " " << std::endl;
    i->makeSound(); //will output the cat sound!
    meta->makeSound();
    return 0;
}