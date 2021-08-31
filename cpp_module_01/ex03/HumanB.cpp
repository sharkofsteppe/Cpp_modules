#include "HumanA.hpp"
#include "HumanB.hpp"
#include "Weapon.hpp"

HumanB::HumanB( std::string name)
{
    this->_name = name;
}

HumanB::HumanB()
{
}

HumanB::~HumanB()
{
}

void    HumanB::attack(void)
{
    std::cout << this->_name << " attacks with his " << _ofB->getType() << std::endl;
}

void    HumanB::setWeapon(Weapon &weapon)
{
    this->_ofB = &weapon;
}