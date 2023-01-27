#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form()
{
    std::cout << "Default Form contructor called" << std::endl;
}

Form::Form(std::string name, int sign, int exec)
{
    try{
    std::cout << "Form contructor called" << std::endl;
    if (sign < 1 || exec < 1)
        throw GradeTooHighException;
    if ( sign > 150 || exec > 150)
        throw GradeTooLowException;
    else
    {
        this->is_signed = false;
        std::cout << this->name << ": Form created" << std::endl;
    }
    }
    catch (std::exception &e) {
        std::cerr << e.what() << std::endl;
}
}

Form::~Form()
{
    std::cout << this->name << " : Form destroyed" << std::endl;
}

Form::Form(Form const &other) 
{
    this->name = other.name;
    this->sign = other.sign;
    this->exec = other.exec;
    this->is_signed = other.is_signed;
}

Form& Form::operator=( Form const &other) {
    if (this != &other)
    {
        this->exec = other.exec;
        this->sign = other.sign;
        this->name = other.name;
        this->is_signed = other.is_signed;
    }
    return *this;
}

std::ostream &operator<<(std::ostream &ofs, Form &in) {
    ofs << "Form : " << in.getName() << std::endl
        << "grade to sign : " << in.getSign() << std::endl
        << "grade to execute : " << in.getExec() << std::endl;
    if(in.getIsSigned() == true)
        ofs <<"signed";
    else
        ofs  << "no signed ";
    ofs << std::endl;
    return ofs;
}

std::string const	Form::getName() {
	return name;
}

bool	Form::getIsSigned() const {
	return is_signed;
}

int	Form::getExec() const {
	return exec;
}

int	Form::getSign() const {
	return sign;
}

void Form::beSigned(Bureaucrat &Bur)
{
    try
    {
        if(this->getSign() >= Bur.getGrade())
            this->is_signed = true;
        else
            throw GradeTooLowException;
    }
    catch(std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    
}