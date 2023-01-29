#include "animal.hpp"
#include "cat.hpp"
#include "dog.hpp"
#include "wrongAnimal.hpp"
#include "wrongCat.hpp"
int main()
{
    const wrongAnimal* meta = new wrongAnimal();
    const wrongAnimal* i = new wrongCat();
    std::cout << i->getType() << " " << std::endl;
    i->makeSound(); //will output the cat sound!
    meta->makeSound();
    return 0;
}