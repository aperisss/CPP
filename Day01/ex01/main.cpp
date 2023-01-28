#include "Zombie.hpp"

int main()
{
    Zombie *azz;
    azz = zombieHorde(20, "horde");

    delete [] azz;

    return 0;
}