#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>

class Animal
{
    public:
        Animal();
        ~Animal();
        Animal(const Animal &ani);
        Animal &operator= (const Animal &ani);
        const std::string& getType() const;
        void makeSound() const;

    protected:
        std::string _type;
};

#endif