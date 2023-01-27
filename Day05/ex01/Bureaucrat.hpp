#include"Form.hpp"
#include<iostream>
#include<string>

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

class Bureaucrat
{
    private:
    std::string name;
    int grade;
    public:
    Bureaucrat();
    Bureaucrat(std::string name, int grade);
    ~Bureaucrat();

    Bureaucrat(Bureaucrat const &other);
    Bureaucrat &operator=(Bureaucrat const &other);

    std::string getName() const;
    int getGrade();
    void    upGrade();
    void    downGrade();
    void signForm(Form &other);

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
};

std::ostream &operator<<(std::ostream &ost, Bureaucrat &in) ;

#endif