#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
    std::cout << "Default Bureaucrat constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade)
{
    std::cout << "Bureaucrat constructor called" << std::endl;
    if (grade < 1)
        throw Bureaucrat::GradeTooLowException;
    if (grade > 150)
        throw GradeTooHighException;
    else
    {
        this->grade = grade;
    }
    this->name = name;
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "Default destructor called" << std::endl;
}

Bureaucrat::Bureaucrat( Bureaucrat const &other) {
    *this = other;
}

Bureaucrat& Bureaucrat::operator=( Bureaucrat const &other) {
    if (this != &other)
        this->grade = other.grade;
    return *this;
}

std::ostream &operator<<( std::ostream &ofs, Bureaucrat &in) {
    ofs << in.getName() << ", bureaucrat grade " << in.getGrade() << std::endl;
    return ofs;
}

int Bureaucrat::getGrade()
{
    return this->grade;
}

std::string Bureaucrat::getName() const 
{
    return this->name;
}

void Bureaucrat::upGrade()
{
    try{
        if (grade < 2)
        throw Bureaucrat::GradeTooHighException;
        else
        {
            this->grade--;
            std::cout << this->name << " has been upgraded" << std::endl;
        }
    }
    catch (std::exception &f)
    {
        std::cerr << f.what() << std::endl;
    }
}

void Bureaucrat::downGrade()
{
    try{
        if (grade > 149)
        throw Bureaucrat::GradeTooHighException;
        else{
            this->grade++;
            std::cout <<this->name << "has been downgraded" << std::endl;
        }
    }
    catch (std::exception &f)
    {
        std::cerr << f.what() << std::endl;
    }
}