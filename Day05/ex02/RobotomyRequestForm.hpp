#include "Form.hpp"

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

class RobotomyRequestForm : public Form
{
    public:
    RobotomyRequestForm();
    ~RobotomyRequestForm();
    RobotomyRequestForm(RobotomyRequestForm const &other);
    RobotomyRequestForm	&operator=( RobotomyRequestForm const &other);
};

#endif