#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>
# include <iostream>

class Zombie
{
    private:
        std::string name;

    public:
        std::string get_name(void);
        void set_name(std::string str);
        void announce(void);
        Zombie(void);
        ~Zombie(void);
};

#endif