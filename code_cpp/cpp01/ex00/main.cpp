#include "Zombie.hpp"

int main()
{
    Zombie zom;

    std::string name = "James";

    zom.set_name(name);
    zom.announce();
    return(0);
}