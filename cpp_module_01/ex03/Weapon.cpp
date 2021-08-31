#include "HumanA.hpp"
#include "HumanB.hpp"
#include "Weapon.hpp"

Weapon::Weapon(std::string wt)
{
    this->_type = wt;
}

Weapon::~Weapon()
{
}

const std::string& Weapon::getType(void)
{
    const   std::string &reftostr = this->_type;
    return (reftostr);
}
void    Weapon::setType(const std::string &typer)
{
    this->_type = typer;
}