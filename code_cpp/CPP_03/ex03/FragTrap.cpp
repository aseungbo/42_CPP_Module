#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    _Hp = F_HP;
    _Ep = F_EP;
    _Ad = F_AD;
    std::cout << "FragTrap " << _Name << " constructor called" << std::endl;
}

FragTrap::FragTrap(void) : ClapTrap()
{
    _Hp = F_HP;
    _Ep = F_EP;
    _Ad = F_AD;
    std::cout << "FragTrap " << _Name << " constructor called" << std::endl;
}

FragTrap::~FragTrap(void)
{
     std::cout << "FragTrap " << _Name << " descructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap& ft) : ClapTrap(ft)
{
    *this = ft;
    std::cout << "FragTrap " << _Name << " Copy constructor called" << std::endl;
}

FragTrap& FragTrap::operator = (const FragTrap& ft)
{
    if (this == &ft)
	    return (*this);
    ClapTrap::operator=(ft);
    return (*this);
}

void    FragTrap::highFivesGuys(void)
{
    std::cout << _Name << " request high fives!" << std::endl;
}
