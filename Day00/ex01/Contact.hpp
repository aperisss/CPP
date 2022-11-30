#include <iostream>
#include <string>

#ifndef CONTACT_HPP
#define CONTACT_HPP

class Contact
{
public:

    Contact (void);
    ~Contact (void);
    void    SetFirstName(std::string);
    void    SetLastName(std::string);
    void    SetNickName(std::string);
    void    SetPhoneNumber(std::string);
    void    SetDarkestSecret(std::string);
    std::string    GetFirstName(void);
    std::string    GetLastName(void);
    std::string    GetNickName(void);
    std::string    GetPhoneNumber(void);
    std::string    GetDarkestSecret(void);


private:
    std::string    first_name;
    std::string    last_name;
    std::string    nickmane;
    std::string    phone_number;
    std::string    darkest_secret;
};


#endif