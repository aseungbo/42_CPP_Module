#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap
{
    public:
        ClapTrap(std::string name);
        ClapTrap(void);
        ClapTrap(const ClapTrap& ct);
        ~ClapTrap(void);
        ClapTrap& operator = (const ClapTrap& ct);
        void attack(std::string const & target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);

    private:
        std::string _Name;
        int _Hp;
        int _Ep;
        int _Ad;  
};

#endif