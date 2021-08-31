#ifndef CLAPTRAP_CPP
#define CLAPTRAP_CPP

#include <iostream>
#include <string>

class ClapTrap
{
protected:
    std::string     _Name;
    unsigned int    _Hitpoints;
    unsigned int    _EnergyPoints;
    unsigned int    _AttackDamage;


public:
    ClapTrap( std::string name );
    ClapTrap( ClapTrap const &ref );
    ClapTrap & operator=( ClapTrap const &ref);
    ClapTrap( void );
    ~ClapTrap( void );
    std::string     getName() const;
    unsigned int    getHP() const;
    unsigned int    getEP() const;
    unsigned int    getAD() const;
    void    attack( std::string const & target);
    void    takeDamage( unsigned int amount );
    void    beRepaired( unsigned int amount );
    void    showConditions( void );

};


#endif