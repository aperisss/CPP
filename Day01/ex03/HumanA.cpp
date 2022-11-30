#include "HumanA.hpp"


HumanA::HumanA (std::string str,Weapon& Weapon) : _weapon(Weapon)
{
    this->_name = str;
    return;
}

HumanA::~HumanA (void)
{
    return;
}

void HumanA::attack(void)
{
    std::cout << this->_name 
    << " attacks with their " << this->_weapon.getType() << std::endl;
    return;
}

