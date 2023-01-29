#include "Weapon.hpp"

Weapon::Weapon(std::string str)
{
    this->_type = str;
    return;
}

Weapon::~Weapon(void)
{
    return;
}

const std::string& Weapon::getType(void)
{
    // std::string &ref = this->_type;
    // return ref;
    return this->_type;
}

void Weapon::setType(std::string str)
{
    _type = str;
    return;
}

std::string Weapon::_type = "";