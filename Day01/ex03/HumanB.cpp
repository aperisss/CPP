#include "HumanB.hpp"
#include "Weapon.hpp"

HumanB::HumanB (std::string str)
{
    this->name = str;
    return;
}

HumanB::~HumanB (void)
{
    return;
}

void HumanB::attack(void)
{
    if (this->weapon == NULL)
        std::cout << "HumanB doesn't have a weapon" <<std::endl;
    else
    {
    std::cout << this->name 
    << " attacks with their " << weapon->getType() << std::endl;
    }
    return;
}

void HumanB::setWeapon(Weapon Weapon)
{
    this->weapon = &Weapon;
    return;
}