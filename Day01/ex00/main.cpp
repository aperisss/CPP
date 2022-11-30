#include "Zombie.hpp"

int main()
{
    Zombie *azz;
    std::cout << "newzombie function called" << std::endl;
    azz = newZombie("new");
    std::cout << "random function called" << std::endl;
    randomChump("random");
    delete azz;

    return 0;
}