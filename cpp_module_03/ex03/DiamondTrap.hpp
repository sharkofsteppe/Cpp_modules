#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{
private:
    std::string     _Name;

public:
    DiamondTrap( std::string name );
    DiamondTrap( DiamondTrap const &ref );
    DiamondTrap & operator=( DiamondTrap const &ref );
    DiamondTrap( void );
    ~DiamondTrap( void );
    void            WhoAmI( void ) const;
    unsigned int    getFragsHP() const;
    unsigned int    getFragsAD() const;
};


#endif