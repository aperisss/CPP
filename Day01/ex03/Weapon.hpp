#include <iostream>
#include <string>

#ifndef WEAPON_HPP
#define WEAPON_HPP

class Weapon
{
    public:
        Weapon(std::string str);
        ~Weapon(void);
        std::string getType(void);
        void setType(std::string str);

    private:
        static std::string _type;

};

#endif