#include "Form.hpp"
#include "Bureaucrat.hpp"


Bureaucrat::Bureaucrat()
{
    std::cout << "Default Bureaucrat constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade)
{
    std::cout << "Bureaucrat constructor called" << std::endl;
    if (grade < 1)
        throw GradeTooLowException;
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
    std::cout << " in copy" << std::endl;
    *this = other;
}

Bureaucrat& Bureaucrat::operator=( Bureaucrat const &other) {
    std::cout << " in = " << std::endl;
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

void Bureaucrat::signForm(Form &other)
{
    if ( other.getIsSigned() == false) {
        if (other.getSign() >= this->getGrade()) {
            other.beSigned(*this);
            std::cout << this->getName() << " signed " << other.getName() << std::endl;
        }
    		else {
			std::cout << this->getName() << " couldn't sign " << other.getName()
				<< " because ";
			try {
				throw Bureaucrat::GradeTooLowException;
			}
			catch (std::exception &e) {
				std::cout << e.what() << std::endl;
			}
		}
	}
	else
		std::cout << "The other " << other.getName() << " is already signed !" << std::endl;
}
