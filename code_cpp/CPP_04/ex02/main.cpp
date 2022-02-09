#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    // 독립적인 객체 생성 불가능
    // Animal *ani = new Animal();

    // Upcasting
    Animal *j = new Dog();
    Animal *i = new Cat();
    j->makeSound();
    i->makeSound();

    delete i;
    delete j;
    i = NULL;
    j = NULL;
    return 0;
}