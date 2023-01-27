#include <iostream>
#include <string>
#include <cmath>
#include <math.h>
# include <iostream>
# include <string>
# include <cctype>
# include <iomanip>
# include <cstdlib>
# include <fstream>
# include <cmath>

#ifndef FIXED_HPP
#define FIXED_HPP

class Fixed
{
    public:
        Fixed();
        Fixed(const int n);
        Fixed(const float n);
        float toFloat(void)const;
        int toInt(void) const;
        Fixed (const Fixed &other);
        ~Fixed(void);
        Fixed &operator=(const Fixed &other);
        Fixed operator+(const Fixed &other);
        Fixed operator-(const Fixed &other);
        Fixed operator*(const Fixed &other);
        Fixed operator/(const Fixed &other);
        bool operator>(const Fixed &other)const;
        bool operator<(const Fixed other)const;
        bool operator>=(const Fixed &other);
        bool operator<=(const Fixed &other);
        bool operator==(const Fixed &other);
        bool operator!=(const Fixed &other);
        Fixed &operator++(void);
        Fixed operator++(int);
        Fixed &operator--(void);
        Fixed operator--(int);
        void setRawBits(int const raw);
        int getRawBits(void) const;
        static Fixed &min(Fixed &fixe1, Fixed &fixe2);
        static const Fixed &min(const Fixed &fixe1, const Fixed &fixe2);
        static Fixed &max(Fixed &fixe1, Fixed &fixe2);
        static const Fixed &max(const Fixed &fixe1, const Fixed &fixe2);

        
    private:
        int _n;
        static const int kNbrBits = 8;

};

 std::ostream& operator<<(std::ostream& out, const Fixed& obj);

#endif