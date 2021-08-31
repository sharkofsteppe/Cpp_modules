#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>
#include <iostream>

class Weapon
{
private:
    std::string _type;
public:
    Weapon(){};
    Weapon(std::string wt);
    ~Weapon();
    const std::string &getType(void);
    void    setType(const std::string &typer);
};

#endif