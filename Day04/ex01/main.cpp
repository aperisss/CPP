#include "animal.hpp"
#include "cat.hpp"
#include "dog.hpp"


int main()
{
    const Animal* Reserve[10];

    for (int i = 0; i < 10; i++)
    {
        if(i % 2)
            Reserve[i] = new Dog();
        else
            Reserve[i] = new Cat();
    }
    for (int i = 0; i < 10; i++)
    {
        std::cout << std::endl;
        Reserve[i]->makeSound();
        Reserve[i]->DisplayBrain();
        std::cout << std::endl;
    }
    for (int i = 0; i < 10; i++)
        delete Reserve[i];

    std::cout << std::endl;

    std::cout << "Finished " << std::endl;
    
    return 0;
}