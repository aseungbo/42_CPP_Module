#include "DiamondTrap.hpp"

int main()
{
    DiamondTrap a("a");
    std::cout << std::endl;
    std::cout << "🐸 monster " << a.get_Name() << " profile" << std::endl;
    std::cout << "Hit points: " << a.get_Hp() << std::endl;
    std::cout << "Energy points: " << a.get_Ep() << std::endl;
    std::cout << "Attack damage: " << a.get_Ad() << std::endl;
    std::cout << std::endl;
    a.whoAmI();
    std::cout << std::endl;
    
    DiamondTrap b("b");
    std::cout << std::endl;
    std::cout << "🐸 monster " << b.get_Name() << " profile" << std::endl;
    std::cout << "Hit points: " << b.get_Hp() << std::endl;
    std::cout << "Energy points: " << b.get_Ep() << std::endl;
    std::cout << "Attack damage: " << b.get_Ad() << std::endl;
    std::cout << std::endl;
    b.whoAmI();
    std::cout << std::endl;
    
    a.attack("b");
    b.takeDamage(a.get_Ad());
    a.attack("b");
    b.takeDamage(a.get_Ad());
    a.attack("b");
    b.takeDamage(a.get_Ad());
    std::cout << std::endl;
    return (0);
}