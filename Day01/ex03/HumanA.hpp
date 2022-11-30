#include <iostream>
#include "Weapon.hpp"

#ifndef HUMANA_HPP
#define HUMANEA_HPP

class HumanA
{
    public:

    HumanA(std::string str, Weapon& Weapon);
    ~HumanA(void);
    void attack(void);

    private :

    std::string _name;
    Weapon&     _weapon;
};

#endif