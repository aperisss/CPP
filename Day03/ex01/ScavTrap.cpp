#include "Scavtrap.hpp"

ScavTrap::ScavTrap(std::string name)
{
    this->name = name;
    std::cout << "ScavTrap " << name << " constructor called" << std::endl;
    this->setAttackDamage(20);
    this->setEnergyPoints(50);
    this->setHitPoints(100);
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap destructor called" << std::endl;
}

 void ScavTrap::guardGate()
 {
    std::cout << this->name << " is now in mode Gate keeper" << std::endl;
 }

 ScavTrap::ScavTrap(ScavTrap const &obj)
{
    std::cout << "Copy ScavTrap constructor called" << std::endl;
    this->name = obj.name;
    this->Hit_points = obj.Hit_points;
    this->Energy_points = obj.Energy_points;
    this->Attack_damage = obj.Attack_damage;
}

ScavTrap &ScavTrap::operator=(ScavTrap const &obj)
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