#include "Zombie.hpp"

int main()
{
    Zombie *azz;
    std::cout << "zombiehorde function called" << std::endl;
    azz = zombieHorde(10, "horde");

    delete [] azz;

    return 0;
}