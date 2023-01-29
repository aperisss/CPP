#include "Fixed.hpp"

Fixed::Fixed()
{
    // std::cout << "Default constructor called" << std::endl;
    this->_n = 0;
    return;
}

Fixed::Fixed( int const n)
{
    // std::cout << "Int constructor called" << std::endl;
    this->_n = n << this->kNbrBits;
    return;
}

Fixed::Fixed(float const n)
{
    this->_n = roundf(n * (1 << this->kNbrBits));
    // std::cout << "Float constructor called" << std::endl;
    return;
}

float Fixed::toFloat(void) const
{
    return (float)this->getRawBits() / (float)(1 << 8);
}

int Fixed::toInt(void) const
{
    return this->getRawBits() >> this->kNbrBits;
}

Fixed::Fixed(const Fixed &other)
{
    // std::cout << "copy constructor called" << std::endl;
    *this = other;
}

Fixed &Fixed::operator=(const Fixed &other)
{
    // std::cout << "copy assignment operator called" << std::endl;
    if (this != &other)
        this->_n = other.getRawBits();
    return *this;
}

Fixed Fixed::operator+(const Fixed &other)
{
    // std::cout << "addition operator called" << std::endl;
    this->_n = this->_n + other._n;
    return *this;
}

Fixed Fixed::operator-(const Fixed &other)
{
    // std::cout << "soustraction operator called" << std::endl;
   this->_n = this->_n - other._n;
    return *this;
}

Fixed Fixed::operator*(const Fixed &other)
{
    // std::cout << "multiplication operator called" << std::endl;
    this->_n = (this->_n * other._n) >> this->kNbrBits;
    return *this;
}

Fixed Fixed::operator/(const Fixed &other)
{
    // std::cout << "division operator called" << std::endl;
    this->_n = (this->_n << this->kNbrBits)/ other._n;
    return *this;
}

bool Fixed::operator<(const Fixed other) const 
{
    // std::cout << "comparaison operator called" << std::endl;
    if (this->_n < other.getRawBits())
        return (1);
    else
        return(0);
}

bool Fixed::operator>(const Fixed &other) const
{
    // std::cout << "comparaison operator called" << std::endl;
    
    if (this->_n > other._n)
        return (true);
    else
        return(false);
}

bool Fixed::operator<=(const Fixed &other)
{
    // std::cout << "comparaison operator called" << std::endl;
    
    if (this->_n <= other._n)
        return (true);
    else
        return(false);
}

bool Fixed::operator>=(const Fixed &other)
{
    // std::cout << "comparaison operator called" << std::endl;
    
    if (this->_n >= other._n)
        return (true);
    else
        return(false);
}

bool Fixed::operator==(const Fixed &other)
{
    // std::cout << "comparaison operator called" << std::endl;
    
    if (this->_n == other._n)
        return (true);
    else
        return(false);
}

bool Fixed::operator!=(const Fixed &other)
{
    // std::cout << "comparaison operator called" << std::endl;
    
    if (this->_n != other._n)
        return (true);
    else
        return(false);
}

Fixed Fixed::operator++(int) // post
{
    Fixed a(*this);
    operator++();
    return (a);

}

Fixed &Fixed::operator++(void) // pre
{
    this->_n++;
    return (*this);
}

Fixed Fixed::operator--(int) // post
{
    Fixed a(*this);
    operator--();
    return (a);
}

Fixed &Fixed::operator--(void) // pre
{
    this->_n--;
    return (*this);
}

Fixed::~Fixed()
{
    // std::cout << "Destructor called" << std::endl;
    return;
}

int Fixed::getRawBits(void) const
{
    return this->_n;
}

void Fixed::setRawBits(int const raw)
{
    this->_n = raw;
    return;
}

std::ostream &operator<<(std::ostream &out, const Fixed &obj)
{
    out << obj.toFloat();
    return out;
}

Fixed&  Fixed::min(Fixed &x, Fixed &y)
{
    return  x < y ? x : y;
}

const Fixed& Fixed::min(const Fixed &x, const Fixed &y)
{
    return x < y ? x : y;
}

Fixed& Fixed::max(Fixed &x, Fixed &y)
{
    return x > y ? x : y;
}
const Fixed& Fixed::max(const Fixed &x, const Fixed &y)
{
    return x > y ? x : y;
}
