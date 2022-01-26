#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
    public:
        Fixed( void );
        ~Fixed( void );
        Fixed( const Fixed& fix );
        Fixed& operator = (const Fixed& fix);
        
        int getRawBits( void ) const;
        void setRawBits( int const raw );

    private:
        static const int _bits;
        int _fixed_val;
};

#endif