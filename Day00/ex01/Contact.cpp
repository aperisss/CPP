#include "Contact.hpp"
#include "PhoneBook.hpp"

Contact::Contact(void)
{
    return;
}

Contact::~Contact(void)
{
    return;
}

void Contact::SetFirstName(std::string str)
{
    this->first_name = str;
    return;
}

void Contact::SetLastName(std::string str)
{
    this->last_name = str;
    return;
}

void Contact::SetNickName(std::string str)
{
    this->nickmane = str;
    return;
}

void Contact::SetPhoneNumber(std::string str)
{
    this->phone_number = str;
    return;
}

void Contact::SetDarkestSecret(std::string str)
{
    this->darkest_secret = str;
    return;
}

std::string Contact::GetFirstName(void)
{
    return this->first_name;
}

std::string Contact::GetLastName(void)
{
    return this->last_name;
}

std::string Contact::GetNickName(void)
{
    return this->nickmane;
}

std::string Contact::GetPhoneNumber(void)
{
    return this->phone_number;
}

std::string Contact::GetDarkestSecret(void)
{
    return this->darkest_secret;
}
