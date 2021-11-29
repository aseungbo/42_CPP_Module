#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name)
{
    _Name = name;
    _Hp = 10;
    _Ep = 10;
    _Ad = 0;
    std::cout << "ClapTrap constructor <" << get_Name() << "> called" << std::endl;
}

ClapTrap::ClapTrap(void)
{
    _Hp = 10;
    _Ep = 10;
    _Ad = 0;
    std::cout << "ClapTrap constructor called" << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap desctructor <" << get_Name() << "> called" << std::endl;
}

void ClapTrap::attack(std::string const & target)
{
    std::cout << "ClapTrap " << get_Name() << " attacks " << target <<
    " causing " << get_Ad() << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    _Hp -= amount;
    std::cout << "ClapTrap " << get_Name() << " take " << amount << " damage. "
    << "Now, ClapTrap " << get_Name() << " Hp: " << get_Hp() << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    _Hp += amount;;
    std::cout << "ClapTrap " << get_Name() << " repaired " << amount << " Hp. "
    << "Now, ClapTrap " << get_Name() << " Hp: " << get_Hp() << std::endl;
}

void ClapTrap::set_Name(std::string name)
{
    _Name = name;
}

void ClapTrap::set_Hp(int amount)
{
    _Hp = amount;
}

void ClapTrap::set_Ep(int amount)
{
    _Ep = amount;
}

void ClapTrap::set_Ad(int amount)
{
    _Ad = amount;
}

std::string ClapTrap::get_Name(void)
{
    return (_Name);
}

int ClapTrap::get_Hp(void)
{
    return (_Hp);
}

int ClapTrap::get_Ep(void)
{
    return (_Ep);
}

int ClapTrap::get_Ad(void)
{
    return (_Ad);
}