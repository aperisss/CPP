#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    std::cout << "ScavTrap default constructor called" << std::endl;
    this->name = "Default";
    this->setAttackDamage(20);
    this->setEnergyPoints(50);
    this->setHitPoints(100);
}

ScavTrap::ScavTrap(std::string name)
{
    this->name = name;
    std::cout << "ScavTrap constructor called" << std::endl;
    this->setAttackDamage(20);
    this->setEnergyPoints(50);
    this->setHitPoints(100);
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap destructor called" << std::endl;
}

 ScavTrap::ScavTrap(ScavTrap const &obj)
{
    std::cout << "ScavTrap copy constructor called" << std::endl;
    *this = obj;
}

ScavTrap &ScavTrap::operator=(ScavTrap const &obj)
{
    std::cout << "ScavTrap assignement operator called" << std::endl;

    if(this != &obj)
    {
        this->name = obj.name;
        this->Hit_points = obj.Hit_points;
        this->Energy_points = obj.Energy_points;
        this->Attack_damage  = obj.Attack_damage ;
    }
    return *this;
}

void ScavTrap::attack(const std::string &target)
{
    if (this->Energy_points >= 0 && this->Hit_points >= 0)
    {
        this->Energy_points--;
         std::cout << this->name << " ScavTrap attacks " << target << ", causing " 
         << this->Attack_damage << " points of damage!" << std::endl;
    }
    else
        std::cout << this->name << " Scavtrap can't attack" << std::endl;
}

 void ScavTrap::guardGate()
 {
    std::cout << this->name << " is now in mode Gate keeper" << std::endl;
 }