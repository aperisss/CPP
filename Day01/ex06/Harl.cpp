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
    std::string str = "DEBUG INFO WARNING ERROR";
    int pos = str.find(level);
    
    switch (pos)
    {
    case 0:
        (Harl.*ptr[0])();
        (Harl.*ptr[1])();
        (Harl.*ptr[2])();
         (Harl.*ptr[3])();
        break;
    case 6:
        (Harl.*ptr[1])();
        (Harl.*ptr[2])();
        (Harl.*ptr[3])();
        break;
    case 11:
        (Harl.*ptr[2])();
        (Harl.*ptr[3])();
        break;
    case 19:
        (Harl.*ptr[3])();
        break;
    default:
        std::cout << "Enter a valid level" << std::endl;
        break;
    }
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

