#include "Contact.hpp"
#include "PhoneBook.hpp"

int main()
{
    PhoneBook PhoneBook;
    std::string str;
    int i;
    i = 0;
    
    while(1)
    {
        std::getline(std::cin,str);
        if (std::cin.fail())
        {
        std::cin.clear();
        std::cin.ignore();
        return(0);
        }
        if (str == "ADD")
        {
            if (PhoneBook.Add(i) == 1)
                return (0);
            i++;
            if (i == 8)
                i = 0;
        }
        else if (str == "SEARCH")
            if (PhoneBook.Search(0) == 1)
                return (0);
        else if (str == "EXIT")
            break;
        else 
            std::cout << "error" << std::endl;
    }
    return (0);
}