#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name)
{
    this->name = name;
    std::cout << "FragTrap " << name << " constructor called" << std::endl;
    this->setAttackDamage(20);
    this->setEnergyPoints(50);
    this->setHitPoints(100);
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap destructor called" << std::endl;
}

 FragTrap::FragTrap(FragTrap const &obj)
{
    std::cout << "Copy FragTrap constructor called" << std::endl;
    this->name = obj.name;
    this->Hit_points = obj.Hit_points;
    this->Energy_points = obj.Energy_points;
    this->Attack_damage = obj.Attack_damage;
}

FragTrap &FragTrap::operator=(FragTrap const &obj)
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

void    FragTrap::highFivesGuys( void )
{
    if(this->Hit_points > 0)
    {
        std::cout << this->name << " HIGH FIVE !" << std::endl;
    }
}