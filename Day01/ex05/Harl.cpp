#include "Harl.hpp"

Harl::Harl(void)
{
    return;
}

Harl::~Harl(void)
{
    return;
}

void Harl::complain(std::string level)
{
    Harl Harl;
    void (Harl::*ptr[])(void) = {
        &Harl::debug,
        &Harl::info,
        &Harl::warning,
        &Harl::error,
    };
    std::string str[] = {
        "DEBUG",
        "INFO",
        "WARNING",
        "ERROR",
    };
    for (int i = 0; i < 4; i++)
    {
        std::cout << level << " " << str[i] << i << std::endl;
        if (level == str[i])
        {
            (Harl.*ptr[i])();
            return ;
        }
    }
    std::cout << "Enter a valid level" << std::endl;
}

void Harl::debug(void)
{
    std::cout << "I love having extra bacon for my 7XL-double-cheese- triple-picklee-special-ketchup burger. I really do !" << std::endl;
    return;
}

void Harl::info(void)
{
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger ! If you did, I wouldn’t be asking for more !" << std::endl;
    return;
}

void Harl::warning(void)
{
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
    return;
}

void Harl::error(void)
{
    std::cout << "This is unacceptable ! I want to speak to the manager now." << std::endl;
    return;
}

