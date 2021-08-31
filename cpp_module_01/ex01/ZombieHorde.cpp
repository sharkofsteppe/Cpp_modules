#include "Zombie.hpp"

void    Zombie::SetZombiename(std::string name)
{
    std::cout << "Give a name, go on" << std::endl;
    std::getline(std::cin, name);
    this->name = name;
}

Zombie* zombieHorde(int N, std::string name)
{
    Zombie  *zombie;
    int     i = 0;
    zombie = new(std::nothrow) Zombie[N];
    if (!zombie)
        std::cout << "Could not allocate memory" << std::endl;
    else
        std::cout << "Zombiez created" << std::endl;
    while (i < N)
    {
        zombie[i].SetZombiename(name);
        i++;
        std::cout << "Zombie is named" << std::endl;
    }
    return (zombie);
}