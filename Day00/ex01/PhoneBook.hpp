#include "Contact.hpp"

#ifndef PHONE_BOOK_HPP
#define PHONE_BO0K_HPP

class PhoneBook
{
    public:
    PhoneBook(void);
    ~PhoneBook(void);
    int Add(int i);
    int Search();
    std::string GoodLenght(std::string str);
    int GoodSearch(std::string str);
    int ValideName(std::string str);
    int ValideNumber(std::string str);
    private:
    Contact rep[8];
};


#endif