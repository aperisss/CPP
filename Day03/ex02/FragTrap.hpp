#include "ClapTrap.hpp"

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

class FragTrap : public ClapTrap
{
    public:
    FragTrap();
    FragTrap(std::string name);
    ~FragTrap();
    FragTrap(FragTrap const &obj);
	FragTrap &operator=(FragTrap const &obj);

    void highFivesGuys(void);

    private:
};

#endif