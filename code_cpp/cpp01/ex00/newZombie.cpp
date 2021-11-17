#include "Zombie.hpp"

Zombie* newZombie( std::string name )
{
    Zombie *tmp = new Zombie;

    tmp->set_name(name);
    return (tmp);
}