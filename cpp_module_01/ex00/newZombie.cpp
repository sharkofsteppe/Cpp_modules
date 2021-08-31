#include "Zombie.hpp"

Zombie* newZombie(std::string name)
{
    Zombie  *zombie;

    zombie = new(std::nothrow) Zombie(name);
    if (!zombie)
        std::cout << "Could not allocate memory" << std::endl;
    zombie->announce();
    return (zombie);
}