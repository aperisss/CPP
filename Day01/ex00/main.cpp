#include "Zombie.hpp"

int main()
{
    Zombie *azz;
    azz = newZombie("new");
    azz->announce();
    randomChump("random");
    delete azz;

    return 0;
}