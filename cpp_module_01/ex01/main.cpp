#include "Zombie.hpp"

void    takeN(int &N)
{
    std::string num;
    std::cout << "Enter number of zombies you want" << std::endl;
    std::getline(std::cin, num);
    N = std::stoi(num);
}

int     main()
{
    Zombie *zombie;
    int i;
    int N;

    takeN(N);
    zombie = zombieHorde(N, "ZOMB");
    i = 0;
    while (i < N)
    {
        zombie[i].announce();
        i++;
    }
    delete [] zombie;
    return (0);
}