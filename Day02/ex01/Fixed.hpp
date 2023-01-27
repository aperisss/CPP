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
        void setRawBits(int const raw);
        int getRawBits(void) const;
        
    private:
        int _n;
        static const int kNbrBits = 8;

};

 std::ostream& operator<<(std::ostream& out, const Fixed& obj);

#endif