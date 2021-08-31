#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>
#include <iostream>

class Zombie
{
private:
    std::string name;
public:
    void    announce(void);
    Zombie( void );
    ~Zombie();
    void    SetZombiename(std::string name);
};

Zombie* zombieHorde(int N, std::string name);

#endif