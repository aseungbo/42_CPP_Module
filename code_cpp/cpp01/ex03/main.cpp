#include "Weapon.hpp"

int main()
{
    std::string str = "sword";

    Weapon w1;

    // only test for Weapon class
    w1.setType(str);
    std::cout << w1.getType() << std::endl;
    std::cout << &w1.getType() << std::endl;

    return (0);
}