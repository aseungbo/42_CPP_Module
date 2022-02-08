#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
    std::cout << getType() << " constructor called." << std::endl;
}

Dog::~Dog()
{
    std::cout << getType() << " destructor called." << std::endl;
}

Dog::Dog(const Dog &dog)
{ 
    *this = dog;
}

Dog& Dog::operator = (const Dog &dog)
{
     if (this == &dog)
        return (*this);
    _type = dog._type;
    return (*this);
}

void Dog::makeSound() const
{
    std::cout << "Dog ! Dog ! Dog !" << std::endl;
}