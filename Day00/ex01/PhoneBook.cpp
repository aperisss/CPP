#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <string>
# include <cstdlib>

PhoneBook::PhoneBook(void)
{

    return;
}

int PhoneBook::Add(int i)
{
    std::string str;
    while(ValideName(str) == 0)
    {
        std::getline(std::cin, str);
        if (ValideName(str) == 0)
            std::cout << " Enter a valid name" << std::endl;
        if (str == "EXIT")
        return (1);
    }
    this->rep[i].SetFirstName(str);
    str.clear();
    while(ValideName(str) == 0)
    {
        std::getline(std::cin, str);
        if (ValideName(str) == 0)
            std::cout << " Enter a valid name" << std::endl;
        if (str == "EXIT")
        return (1);
    }
    this->rep[i].SetLastName(str);
    str.clear();
    while(ValideName(str) == 0)
    {
        std::getline(std::cin, str);
        if (ValideName(str) == 0)
            std::cout << " Enter a valid name" << std::endl;
        if (str == "EXIT")
        return (1);
    }
    this->rep[i].SetNickName(str);
    str.clear();
    while(ValideNumber(str) == 0)
    {
        std::getline(std::cin, str);
        if (ValideNumber(str) == 0)
            std::cout << " Enter a valid number" << std::endl;
        if (str == "EXIT")
        return (1);
    }
    this->rep[i].SetPhoneNumber(str);
    str.clear();
    std::getline(std::cin, str);
     if (str == "EXIT")
        return (1);
    this->rep[i].SetDarkestSecret(str);
    return 0;
}

int PhoneBook::Search()
{
    std::string str;
    int i;

    i = 0;
    while ( i < 8)
    {
        std::cout << i + 1 << "|" << GoodLenght(this->rep[i].GetFirstName()) << "|"
           << GoodLenght(this->rep[i].GetLastName()) << "|" << GoodLenght(this->rep[i].GetNickName())
           << "|" << std::endl;
        i++;
    }
    std::getline(std::cin,str);
    if (str == "EXIT")
        return (1);
    if (GoodSearch(str) == 0)
    {
        std::cout << "Enter a index between 1 and 9" << std::endl;
        this->Search();
        return (0);
    }
    else
    // i = stoi(str);
    i = std::strtol(str.data(), NULL, 10);
    if ( i >= 1 && i <= 9)
    {
        std::cout << this->rep[i - 1].GetFirstName() << std::endl;
        std::cout << this->rep[i - 1].GetLastName() << std::endl;
        std::cout << this->rep[i - 1].GetNickName() << std::endl;
        std::cout << this->rep[i - 1].GetPhoneNumber() << std::endl;
        std::cout << this->rep[i - 1].GetDarkestSecret() << std::endl;
    }
    return 0;
}

void PhoneBook::Exit(void)
{
    std::cout << "phonebook" << std::endl;
    return;
}

PhoneBook::~PhoneBook(void)
{
    std::cout << "phonebook bye" << std::endl;
    return;
}

std::string PhoneBook::GoodLenght(std::string str)
{
    int i = str.size();
    if (i == 0)
        str = "          ";
    else
    {
        if ( i < 10)
        {
            i = 10 - i;
            while ( i-- > 0)
                str = " " + str;
        }
        else
        {
            str = str.substr(0, 10);
            str[9] = '.';
        }
    }
    return (str);
}

int PhoneBook::ValideName(std::string str)
{
    int i = 0;
     if (str.size() == 0)
        return (0);
    while (str[i])
    {
        if ((str[i] < 'a' || str[i] > 'z') && (str[i] < 'A' || str[i] > 'Z') && str[i] != '-')
            return (0);
        i++;
    }
    return (1);
}

int PhoneBook::ValideNumber(std::string str)
{
    int i = 0;
    if (str.size() == 0)
        return (0);
    while (str[i])
    {
        if (str[i] < '0' || str[i] > '9')
            return (0);
        i++;
    }
    if (str.size() > 10)
        return (0);
    return (1);
}

int PhoneBook::GoodSearch(std::string str)
{
    int i = 0;
    if (str.size() != 1)
        return (0);
    while(str[i])
    {
        if (str[i] < '1' || str[i] > '8')
            return (0);
        i++;
    }
    return (1);
}