#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    std::cout << "ClapTrap constructor called" << std::endl;
}

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
    std::cout << "ClapTrap destructor called" << std::endl;
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
    if (this->  Hit_points <= 0) 
		std::cout << this->name << " is dead" << std::endl;
    else if (this->Energy_points <= 0)
		std::cout << this->name << " has no energy" << std::endl;
	else {
		this->Energy_points--;
		std::cout << this->name << " attacks " << target 
		<< ", he lost " << this->Attack_damage << " points of damage!" << std::endl;
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if(this->Hit_points)
    {
        this->Hit_points -= amount;
        std::cout << this->name << " have taked " 
        << amount << " damage" << std::endl;
    }
    else
        std::cout << this->name << " is dead" << std::endl;
}
void ClapTrap::beRepaired(unsigned int amount)
{
    if ( this->Hit_points <= 0)
        std::cout << this->name << " is dead" << std::endl;
    else if (this->Energy_points <= 0)
        std::cout << this->name << " have no energy" << std::endl;
    else if (this->Energy_points > 0 && this->Hit_points > 0)
    {
        this->Energy_points--;
        this->Hit_points += amount;
        std::cout << this->name << " have been repared of" 
        << amount << " energy points" << std::endl;
    }
}

void ClapTrap::setHitPoints(int nb)
{
    this->Hit_points = nb;
}

void ClapTrap::setEnergyPoints(int nb)
{
    this->Energy_points = nb;
}
void ClapTrap::setAttackDamage(int nb)
{
    this->Attack_damage = nb;
}