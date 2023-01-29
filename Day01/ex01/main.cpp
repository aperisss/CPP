#include "Zombie.hpp"

int main()
{
    Zombie *azz;
    azz = zombieHorde(5, "horde");
     for (int i = 0; i < 5; i++)
        azz[i].announce();
    delete [] azz;
    return 0;
}