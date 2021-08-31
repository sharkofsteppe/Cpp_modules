#include "Zombie.hpp"

Zombie::Zombie( void )
{
}

Zombie::~Zombie()
{
    std::cout << "Zombies are deleted" << std::endl;
}

void    Zombie::announce(void)
{
    std::cout << this->name << ":" << "Braiiiiiiinnnzzz" << std::endl;
}
