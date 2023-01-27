#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
    this->_n = 0;
    return;
}

Fixed::Fixed(const Fixed &other)
{

    std::cout << "copy constructor called" << std::endl;
    this->_n = other.getRawBits();
}

Fixed &Fixed::operator=(const Fixed &other)
{
    std::cout << "copy assignment operator called" << std::endl;
    this->_n = other.getRawBits();
    return *this;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
    return;
}

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return this->_n;
}

void Fixed::setRawBits(int const raw)
{
     std::cout << "setRawBits member function called" << std::endl;
    this->_n = raw;
    return;
}
