#include "Zombie.hpp"

Zombie::Zombie(std::string str)
{
    this->name = str;
    std::cout << "Zombie created" << std::endl;
}

Zombie::~Zombie()
{
    std::cout << "Zombies are deleted" << std::endl;
}

void    Zombie::announce(void)
{
    std::cout << this->name << ":" << "Braiiiiiiinnnzzz" << std::endl;
}
