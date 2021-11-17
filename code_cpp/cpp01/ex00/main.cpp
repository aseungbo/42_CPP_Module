#include "Zombie.hpp"
#include <iostream>

int main()
{
    std::string name[3] = {"James", "john", "Bryan"};

    for (int i = 0; i < 3; i++)
        randomChump(name[i]);
    return(0);
}