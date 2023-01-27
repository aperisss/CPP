#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name)
{
    std::cout << "Default constructor called" << std::endl;
    this->name = name;
    this->Energy_points = 10;
    this->Attack_damage = 0;
    this->Hit_points = 10;
}

ClapTrap::~ClapTrap(void)
{
    std::cout << "Default constructor called" << std::endl;
}

void ClapTrap::attack(const std::string &target)
{
    this->Energy_points--;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    this->Hit_points -= amount;
    std::cout << this->name << " have taked" 
        << amount << " damage" << std::endl;
}
void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->Energy_points > 0 && this->Hit_points > 0)
    {
        this->Energy_points--;
        this->Hit_points += amount;
    }
    std::cout << this->name << " have been repared of" 
        << amount << " energy points" << std::endl;
}