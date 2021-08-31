#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap: public ClapTrap
{
private:
    /* data */
public:
   FragTrap( FragTrap const &ref );
   FragTrap & operator=( FragTrap const &ref);
   FragTrap( void );
   FragTrap( std::string name );
    ~FragTrap();
    void    highFivesGuys( void );
};

#endif