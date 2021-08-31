#include "Zombie.hpp"

int     main()
{
    Zombie *zombie;
    zombie = newZombie("John");
    randomChump("LOCUST");
    delete zombie;
    zombie = NULL;
    return (0);
}