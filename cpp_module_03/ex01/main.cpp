#include "ScavTrap.hpp"

int     main()
{
    ScavTrap Unit("Noheart Anthony");
    Unit.showConditions();
    Unit.attack("Alberto");
    Unit.takeDamage(5);
    Unit.beRepaired(3);
    Unit.showConditions();
    Unit.guardGate();
    ClapTrap U2("Horseface Sean");
    U2.attack("Dickhead John");
    return (0);
}