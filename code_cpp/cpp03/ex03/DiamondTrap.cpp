#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name +  "_clap_name")
{
    _Name = name;
    set_Hp(FragTrap::get_Hp()); // 100
    set_Ep(ScavTrap::get_Ep()); // 50
    set_Ad(FragTrap::get_Ad()); // 30
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