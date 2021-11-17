#include "Zombie.hpp"

Zombie::Zombie(void)
{
    ;
}

Zombie::~Zombie(void)
{
    std::cout << Zombie::get_name() << " is gone to Blackhole :(" << std::endl;
}

std::string Zombie::get_name(void)
{
    return (this->name);
}

void Zombie::set_name(std::string str)
{
    this->name = str;
}

void Zombie::announce(void)
{
    std::cout << this->name << " BraiiiiiiinnnzzzZ..." << std::endl;
}