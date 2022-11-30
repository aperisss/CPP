#include <iostream>
#include "Weapon.hpp"

#ifndef HUMANB_HPP
#define HUMANEB_HPP

class HumanB
{
    public:

    HumanB(std::string str);
    ~HumanB(void);
    void attack(void);
    void setWeapon(Weapon weapon);

    private :

        std::string name;
        Weapon *weapon;

};

#endif