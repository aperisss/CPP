#include "FragTrap.hpp"

FragTrap::FragTrap()
{
    std::cout << "FragTrap default constructor called" << std::endl;
    this->name = "default";
    this->setAttackDamage(30);
    this->setEnergyPoints(100);
    this->setHitPoints(100);
}

FragTrap::FragTrap(std::string name)
{
    this->name = name;
    std::cout << "FragTrap constructor called" << std::endl;
    this->setAttackDamage(30);
    this->setEnergyPoints(100);
    this->setHitPoints(100);
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap destructor called" << std::endl;
}

 FragTrap::FragTrap(FragTrap const &obj)
{
    std::cout << "Copy FragTrap constructor called" << std::endl;
    *this = obj;
}

FragTrap &FragTrap::operator=(FragTrap const &obj)
{
    std::cout << "FragTrap assignement operator called" << std::endl;

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