#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    _Hp = F_HP;
    _Ep = F_EP;
    _Ad = F_AD;
    std::cout << "FragTrap constructor <" << _Name << "> called" << std::endl;
}

FragTrap::FragTrap(void) : ClapTrap()
{
    _Hp = F_HP;
    _Ep = F_EP;
    _Ad = F_AD;
    std::cout << "FragTrap constructor <" << _Name << "> called" << std::endl;
}

FragTrap::FragTrap(const FragTrap& ft) : ClapTrap(ft)
{
    *this = ft;
    std::cout << "FragTrap Copy constructor <" << _Name << "> called" << std::endl;
}

FragTrap::~FragTrap(void)
{
    ;
}

void    FragTrap::highFivesGuys(void)
{
    std::cout << _Name << " request high fives!" << std::endl;
}

FragTrap& FragTrap::operator = (const FragTrap& ft)
{
    if (this == &ft)
	    return (*this);
    ClapTrap::operator=(ft);
    return (*this);
}