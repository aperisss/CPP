#include "ClapTrap.hpp"
#include "ScavTrap.hpp"


    int main(void)
{
	ClapTrap	Riku("Riku");
	ScavTrap	Bob("Bob");

	std::cout << std::endl;

	Riku.attack( "a pile of bricks" );
	Riku.takeDamage( 5 );
	Riku.beRepaired( 3 );
	Riku.takeDamage( 8 );

	Bob.attack( "Scavenger" );
	Bob.takeDamage( 25 );
	Bob.beRepaired( 20 );
	Bob.guardGate();
	Bob.takeDamage( 100 );
	return 0;
}