#include "Contact.hpp"

#ifndef PHONE_BOOK_HPP
#define PHONE_BO0K_HPP

class PhoneBook
{
    public:
    PhoneBook(void);
    ~PhoneBook(void);
    void setnb(int nbs);
    int getnb(void);
    int Add(int i);
    int Search(int i);
    void Exit(void);
    std::string GoodLenght(std::string str);
    int GoodSearch(std::string str);
    int ValideName(std::string str);
    int ValideNumber(std::string str);
    private:
   
    int nb;
    Contact rep[8];
};


#endif