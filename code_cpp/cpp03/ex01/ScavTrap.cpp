#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) 
{
    _Hp = 100;
    _Ep = 50;
    _Ad = 20;
    _guard_mode = 0;
    std::cout << "ScavTrap constructor <" << _Name << "> called" << std::endl;
}

ScavTrap::ScavTrap(void) : ClapTrap()
{
    _Hp = 100;
    _Ep = 50;
    _Ad = 20;
    _guard_mode = 0;
    std::cout << "ScavTrap constructor <" << _Name << "> called" << std::endl;
}

ScavTrap::~ScavTrap(void)
{
    // std::cout << "ScavTrap destructor <" << get_Name() << "> called" << std::endl;
}

// void ScavTrap::guardGate()
// {
//     if (get_Ep() >= 25)
//     {
//         _guard_mode = 1;
//         set_Ep((get_Ep() - 25));
//         std::cout << "ScavTrap " << get_Name() << " have enterred in Gate keeper mode." << std::endl;
//     }
//     else
//         std::cout << "ScavTrap " << get_Name() << " have not enough Energy." << std::endl;
// }

// void ScavTrap::attack(std::string const & target)
// {
//     if (_guard_mode == 1)
//         _guard_mode = 0;
//     std::cout << "ScavTrap " << get_Name() << " attacks " << target <<
//     " causing " << get_Ad() << " points of damage!" << std::endl;
// }

// void ScavTrap::takeDamage(unsigned int amount)
// {
//     if (_guard_mode == 1)
//         std::cout << "ScavTrap " << get_Name() << " defended the attack." << std::endl;
//     else
//     {
//         set_Hp(get_Hp() - amount);
//         std::cout << "ScavTrap " << get_Name() << " take " << amount << " damage. "
//         << "Now, ScavTrap " << get_Name() << " Hp: " << get_Hp() << std::endl;
//     }
//     if (get_Hp() < 50 && _guard_mode == 0)
//         guardGate();
// }

// void ScavTrap::beRepaired(unsigned int amount)
// {
//     set_Hp(get_Hp() + amount);
//     std::cout << "ScavTrap " << get_Name() << " repaired " << amount << " Hp. "
//     << "Now, ScavTrap " << get_Name() << " Hp: " << get_Hp() << std::endl;
// }