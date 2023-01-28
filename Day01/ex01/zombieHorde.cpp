#include "Zombie.hpp"

Zombie* zombieHorde (int n, std::string name)
{
    if (n <= 0)
        return NULL;
    int i = 0;
    Zombie *zombie = new Zombie[n];
    while(i < n)
    {
        zombie[i].setName(name);
        zombie[i].announce();
        i++;
    }
    return (zombie);
}