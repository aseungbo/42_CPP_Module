#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat")
{
    std::cout << getType() << " constructor called." << std::endl;
}

WrongCat::~WrongCat()
{
    std::cout << getType() << " destructor called." << std::endl;
}

WrongCat::WrongCat(const WrongCat &wcat)
{
    *this = wcat;
}

WrongCat& WrongCat::operator = (const WrongCat &wcat)
{
    if (this == &wcat)
        return (*this);
    _type = wcat._type;
    return (*this);
}

void WrongCat::makeSound() const
{
    std::cout << "WrongCat ! WrongCat ! WrongCat !" << std::endl;
}