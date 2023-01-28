#include "Form.hpp"

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

class PresidentialPardonForm : public Form
{
    public:
    PresidentialPardonForm();
    ~PresidentialPardonForm();
    PresidentialPardonForm(PresidentialPardonForm const &other);
    PresidentialPardonForm	&operator=( PresidentialPardonForm const &other);
};

#endif