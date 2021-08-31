#include "ScavTrap.hpp"

ScavTrap::ScavTrap( ScavTrap const & ref )
{
    std::cout << "ScavTrap Copy constructor worked here" << std::endl;
    this->_Name = ref.getName();
    this->_Hitpoints = ref.getHP();
    this->_EnergyPoints = ref.getEP();
    this->_AttackDamage = ref.getAD();
}

ScavTrap & ScavTrap::operator=( ScavTrap const &ref)
{
    std::cout << "Assignation operator called " << std::endl;
    this->_Name = ref.getName();
    this->_Hitpoints = ref.getHP();
    this->_EnergyPoints = ref.getEP();
    this->_AttackDamage = ref.getAD();
    return (*this);
}

ScavTrap::ScavTrap( void ) : ClapTrap()
{
    this->setHP(100);
    this->setEP(50);
    this->setAD(20);
    std::cout << "SCAVTRAP DEFAULT constructor have done the work" << std::endl;
}

ScavTrap::ScavTrap( std::string name ) : ClapTrap(name)
{
    this->setHP(100);
    this->setEP(50);
    this->setAD(20);
    std::cout << "SCAVTRAP constructor have done the work" << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "SCAVTRAP Destructor have done the work" << std::endl;
}

void    ScavTrap::attack( std::string const & target)
{
    std::cout << "ScavTrap " << _Name << " attacks " << target <<
    " causing " << _AttackDamage << " points of damage "<< std::endl;
    this->_EnergyPoints -= 1;
}

void    ScavTrap::guardGate( void )
{
    std::cout << "SCAVTRAP ENTERED GATEKEEPER MODE" << std::endl;
}
