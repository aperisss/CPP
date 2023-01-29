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
    std::cout << "Default destructor called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &obj)
{
    std::cout << "Copy ClapTrap constructor called" << std::endl;
    this->name = obj.name;
    this->Hit_points = obj.Hit_points;
    this->Energy_points = obj.Energy_points;
    this->Attack_damage = obj.Attack_damage;
}

ClapTrap &ClapTrap::operator=(ClapTrap const &obj)
{
    std::cout << "Copy operator called" << std::endl;

    if(this != &obj)
    {
        this->name = obj.name;
        this->Hit_points = obj.Hit_points;
        this->Energy_points = obj.Energy_points;
        this->Attack_damage  = obj.Attack_damage ;
    }
    return *this;
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