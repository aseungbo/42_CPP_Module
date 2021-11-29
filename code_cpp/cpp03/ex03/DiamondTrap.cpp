#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name +  "_clap_name")
{
    _Name = name;
    // FragTrap과 ScavTrap의 세팅 값을 가져오는 방법 찾아보기
    set_Hp(100); // 100
    set_Ep(50); // 50
    set_Ad(30); // 30
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

void DiamondTrap::whoAmI(void)
{
    std::cout << "whoAmI" << std::endl;
    std::cout << "name is: " << _Name << std::endl;
    std::cout << "clapTrap name is: " << get_Name() << std::endl;
}
