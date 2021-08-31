#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <string>
#include <iostream>
#include "Weapon.hpp"

class HumanA
{
private:
    std::string _name;
    Weapon      &_ofA;
public:
    HumanA(std::string name, Weapon &weapon);
    HumanA();
    ~HumanA();
    void    attack(void);

};

#endif