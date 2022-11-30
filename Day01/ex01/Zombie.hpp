#include <iostream>
#include <string>

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

class Zombie
{
    public:
        Zombie(void);
        ~Zombie(void);
        void setName(std::string str);
        void announce(void);

    private:
        std::string _name;
};

Zombie* zombieHorde(int n, std::string name);
#endif