#include "HumanA.hpp"
#include "HumanB.hpp"
#include "Weapon.hpp"

HumanA::HumanA( std::string name, Weapon &weapon) :_name(name), _ofA(weapon)
{
}

HumanA::~HumanA()
{
}

 void    HumanA::attack(void)
    {
        std::cout << this->_name << " attacks with his " << this->_ofA.getType() << std::endl;
    }