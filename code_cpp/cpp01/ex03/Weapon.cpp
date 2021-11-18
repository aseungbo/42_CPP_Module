#include "Weapon.hpp"

Weapon::Weapon(/* args */)
{
    std::cout << "✅ Weapon was created" << std::endl;
}

Weapon::~Weapon()
{
    std::cout << "💥 Weapon was destroyed" << std::endl;
}

void Weapon::setType( std::string str )
{
    this->type = str;    
}

const std::string& Weapon::getType( void )
{
    return (type);
}
