#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap: virtual public ClapTrap
{
protected:
    /* data */
public:
    ScavTrap( ScavTrap const &ref );
    ScavTrap & operator=( ScavTrap const &ref);
    ScavTrap( void );
    ScavTrap( std::string name );
    ~ScavTrap();
    void    attack( std::string const & target);
    void    guardGate();
};

#endif