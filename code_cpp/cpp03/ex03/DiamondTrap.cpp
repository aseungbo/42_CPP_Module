#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name +  "_clap_name")
{
    _Name = name;
    std::cout << "DiamondTrap constructor <" << _Name << "> called" << std::endl;
}

DiamondTrap::DiamondTrap(void) : ClapTrap()
{
    std::cout << "DiamondTrap constructor <" << _Name << "> called" << std::endl;
}

DiamondTrap::~DiamondTrap(void)
{
    std::cout << "DiamondTrap desctructor <" << get_Name() << "> called" << std::endl;
    ;
}