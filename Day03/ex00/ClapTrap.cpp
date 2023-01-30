#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    std::cout << "ClapTrap default constructor called" << std::endl;
    this->name = "Default";
    this->Energy_points = 10;
    this->Attack_damage = 0;
    this->Hit_points = 10;
}

ClapTrap::ClapTrap(std::string name)
{
    std::cout << "ClapTrap constructor called" << std::endl;
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
    *this = obj;
}

ClapTrap &ClapTrap::operator=(ClapTrap const &obj)
{
    std::cout << "ClapTrap assignement operator called" << std::endl;

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
    if (this->Energy_points >= 0 && this->Hit_points >= 0)
    {
        this->Energy_points--;
         std::cout << this->name << " ClapTrap attacks " << target << ", causing " 
         << this->Attack_damage << " points of damage!" << std::endl;
    }
    else
        std::cout << this->name << " ClapTrap can't attack" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (this->Hit_points <= 0)
        std::cout << this->name << " ClapTrap is already dead" << std::endl;
    else
    {
        this->Hit_points -= amount;
        std::cout << this->name << " Claptrap have taked " << amount << " damage" << std::endl;
        if (this->Hit_points <= 0)
            std::cout << this->name << " ClapTrap is dead " << std::endl;
    }
}
void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->Energy_points > 0 && this->Hit_points > 0)
    {
        this->Energy_points--;
        this->Hit_points += amount;
        std::cout << this->name << " Claptrap has been repared of " 
        << amount << " energy points" << std::endl;
    }
    else
        std::cout << this->name << " ClapTrap can't repared himself" << std::endl;
   
}