#include "FragTrap.hpp"

int     main()
{
    FragTrap Unit("Noheart Anthony");
    Unit.showConditions();
    Unit.attack("Alberto");
    Unit.takeDamage(5);
    Unit.beRepaired(3);
    Unit.showConditions();
    Unit.highFivesGuys();
    return (0);
}