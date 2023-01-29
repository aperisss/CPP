#include <string>
#include <iostream>

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

class ClapTrap
{
    public:
        ClapTrap();
        ClapTrap(std::string name);
        ~ClapTrap();

        ClapTrap(ClapTrap const &obj);
	    ClapTrap &operator=(ClapTrap const &obj);

        void attack(const std::string &target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);

        void setHitPoints(int nb);
        void setEnergyPoints(int nb);
        void setAttackDamage(int nb);

    protected:
        std::string name;
        int Hit_points;
        int Energy_points;
        unsigned int Attack_damage;

};

#endif