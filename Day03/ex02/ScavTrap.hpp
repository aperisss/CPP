#include "ClapTrap.hpp"

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

class ScavTrap : public ClapTrap
{
    public:
    ScavTrap();
    ScavTrap(std::string name);
    ~ScavTrap();
    ScavTrap(ScavTrap const &obj);
	ScavTrap &operator=(ScavTrap const &obj);

    void guardGate();
    void attack(const std::string &target);
    private:
    


};


#endif