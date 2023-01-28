#include "Form.hpp"

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

class ShrubberyCreationForm : public Form
{
    public:
    ShrubberyCreationForm();
    ~ShrubberyCreationForm();
    ShrubberyCreationForm(ShrubberyCreationForm const &other);
    ShrubberyCreationForm	&operator=( ShrubberyCreationForm const &other);
};

#endif