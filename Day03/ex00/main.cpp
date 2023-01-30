#include "ClapTrap.hpp"

int main()
{
    ClapTrap a("Albert");
    a.attack("bertrand");
    a.takeDamage(5);
    a.beRepaired(3);
    return 0;
}