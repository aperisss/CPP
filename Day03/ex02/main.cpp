#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"


int main(void)
{
	ScavTrap	Scav("Scav");
	FragTrap    Frag("Frag");
	std::cout << std::endl;

	Scav.attack("Frag");
	Frag.takeDamage(20);
	Frag.beRepaired(20);
	Frag.highFivesGuys();

	std::cout << std::endl;
	return 0;
}