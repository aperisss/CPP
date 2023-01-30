#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

    int main(void)
{
	ScavTrap Fred("Fred");
	ScavTrap D("D");
	std::cout << std::endl;
	D.attack("Fred");
	Fred.takeDamage(20);
	Fred.beRepaired(10);
	Fred.attack("D");
	D.takeDamage(20);
	std::cout << std::endl;
	ClapTrap Albert("Albert");
	Albert.attack("Fred");
	Fred.guardGate();
	std::cout << std::endl;
	
	return 0;
}