#include "ClapTrap.hpp"

ClapTrap::ClapTrap( std::string name ) : _Name(name)
{
    this->setHP(10);
    this->setEP(10);
    this->setAD(0);
    std::cout << "CLAPTRAP constructor have done the work" << std::endl;
}

ClapTrap::ClapTrap( void )
{
    std::cout << "CLAPTRAP Default constructor have done the work" << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "CLAPTRAP Destructor have done the work" << std::endl;
}

ClapTrap::ClapTrap( ClapTrap const & ref )
{
    std::cout << "CLAPTRAP Copy constructor worked here" << std::endl;
    *this = ref;
}

ClapTrap & ClapTrap::operator=( ClapTrap const &ref)
{
    std::cout << "Assignation operator called " << std::endl;
    this->_Name = ref.getName();
    this->_Hitpoints = ref.getHP();
    this->_EnergyPoints = ref.getEP();
    this->_AttackDamage = ref.getAD();
    return (*this);
}

void    ClapTrap::attack( std::string const & target)
{
    std::cout << "ClapTrap " << _Name << " attacks " << target <<
    " causing " << _AttackDamage << " points of damage "<< std::endl;
    this->_EnergyPoints -= 1;
}

void    ClapTrap::takeDamage( unsigned int amount )
{
    std::cout << "ClapTrap " << _Name << " takes " << amount <<
    " point of damage "<< std::endl;
    this->_Hitpoints -= amount;
}

void    ClapTrap::beRepaired( unsigned int amount )
{
    std::cout << "ClapTrap " << _Name << " repaired " << amount <<
    " points "<< std::endl;
    this->_Hitpoints += amount;
    this->_EnergyPoints -= amount;
}

std::string     ClapTrap::getName( void ) const
{
    return (this->_Name);
}

unsigned int    ClapTrap::getHP( void ) const
{
    return (this->_Hitpoints);
}

unsigned int    ClapTrap::getEP( void ) const
{
    return (this->_EnergyPoints);
}

unsigned int    ClapTrap::getAD( void ) const
{
    return (this->_AttackDamage);
}

void     ClapTrap::setName( std::string name )
{
    this->_Name = name;
}

void    ClapTrap::setHP( unsigned int HP )
{
    this->_Hitpoints = HP;
}

void    ClapTrap::setEP( unsigned int EP )
{
    this->_EnergyPoints = EP;
}

void    ClapTrap::setAD( unsigned int AD )
{
    this->_AttackDamage = AD;
}

void    ClapTrap::showConditions( void )
{
    std::cout << "ClapTrap: " << _Name << std::endl << "Hitpoints: " << _Hitpoints << std::endl << "Energy Points: " << _EnergyPoints << std::endl;
}
