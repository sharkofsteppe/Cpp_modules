#include "FragTrap.hpp"

FragTrap::FragTrap( FragTrap const & ref )
{
    std::cout << "FragTrap Copy constructor worked here" << std::endl;
    this->_Name = ref.getName();
    this->_Hitpoints = ref.getHP();
    this->_EnergyPoints = ref.getEP();
    this->_AttackDamage = ref.getAD();
}

FragTrap & FragTrap::operator=( FragTrap const &ref)
{
    std::cout << "Assignation operator called " << std::endl;
    this->_Name = ref.getName();
    this->_Hitpoints = ref.getHP();
    this->_EnergyPoints = ref.getEP();
    this->_AttackDamage = ref.getAD();
    return (*this);
}

FragTrap::FragTrap( void ) : ClapTrap()
{
}

FragTrap::FragTrap( std::string name ) : ClapTrap(name)
{
    this->setHP(100);
    this->setEP(100);
    this->setAD(30);
    std::cout << "FragTrap constructor have done the work" << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap Destructor have done the work" << std::endl;
}

void    FragTrap::highFivesGuys( void )
{
    std::cout << "HELLO EVERYBODY" << std::endl;
}

