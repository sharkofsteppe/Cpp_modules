#include "ClapTrap.hpp"

int     main()
{
    ClapTrap Unit("Noheart Anthony");
    Unit.showConditions();
    Unit.attack("Alberto");
    Unit.takeDamage(5);
    Unit.beRepaired(3);
    Unit.showConditions();
    return (0);