#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
    public:
        FragTrap(std::string name);
        FragTrap(void);
        ~FragTrap(void);
        void highFivesGuys(void);
    private:
};

#endif