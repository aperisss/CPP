#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <string>
#include "Bureaucrat.hpp"


class Form
{
     private:
    std::string name;
    bool is_signed;
    int sign;
    int exec;

    public:
    Form();
    Form(std::string name, int sign, int exec);
    ~Form();

    Form(Form const &other);
    Form &operator=(Form const &other);

    std::string const	getName();
    bool	getIsSigned() const;
    int getExec() const;
    int getSign() const;

    class GradeTooHighException : public std::exception
    {
        virtual const char* what() const throw() {
            return "GradeTooHighException: grade should be less than or equal to 150.";
    }
    }GradeTooHighException;

    class GradeTooLowException : public std::exception 
    {
        virtual const char* what() const throw() {
        return "GradeTooLowException: grade should be greater than or equal to 1.";
    }
    }GradeTooLowException;

    void beSigned(Bureaucrat &Bur);
};

std::ostream&	operator<<(std::ostream &ost, Form &in);

#endif
