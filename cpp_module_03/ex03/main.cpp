#include "DiamondTrap.hpp"


int main()
{
    DiamondTrap Unit("RAIMONDAS");

    
    Unit.WhoAmI();
    Unit.ScavTrap::attack("EVERYBODY");
    Unit.guardGate();
    Unit.highFivesGuys();

    
    return (0);
}