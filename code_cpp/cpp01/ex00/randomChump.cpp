#include "Zombie.hpp"

void randomChump( std::string name )
{
    Zombie *tmp;
    
    tmp = newZombie(name);
    tmp->announce();
    delete tmp;
    return ;
}