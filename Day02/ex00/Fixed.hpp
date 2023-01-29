#ifndef FIXED_HPP
#define FIXED_HPP

# include <iostream>
# include <string>
# include <cmath>

class Fixed
{
    public:
        Fixed();
        Fixed (const Fixed &other);
        ~Fixed(void);
        Fixed &operator=(const Fixed &other);
        void setRawBits(int const raw);
        int getRawBits(void) const;

    private:
        int _raw;
        static const int kNbrBits = 8;

};

std::ostream &operator<<(std::ostream &out, const Fixed &obj);

#endif