#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
    std::cout << getType() << " constructor called." << std::endl;
}

Cat::~Cat()
{
    std::cout << getType() << " destructor called." << std::endl;
}

Cat::Cat(const Cat &cat)
{
    *this = cat;
}

Cat& Cat::operator = (const Cat &cat)
{
    if (this == &cat)
        return (*this);
    _type = cat._type;
    return (*this);
}

void Cat::makeSound() const
{
    std::cout << "Cat ! Cat ! Cat !" << std::endl;
}