#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap( std::string name ) : ClapTrap( name + "_clap_name" ), _Name( name )
{
    this->setHP(getFragsHP());
    this->setAD(getFragsAD());
    std::cout << "DiamondTrap constructor have done the work" << std::endl;
}

DiamondTrap::DiamondTrap( void ) : ClapTrap( "Default_clap_name"), _Name("DEFAULT") 
{
    std::cout << "DiamondTrap Default constructor have done the work" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap Destructor have done the work" << std::endl;
}

DiamondTrap::DiamondTrap( DiamondTrap const & ref )
{
    std::cout << "DiamondTrap Copy constructor worked here" << std::endl;
    *this = ref;
}

DiamondTrap & DiamondTrap::operator=( DiamondTrap const &ref )
{
    std::cout << "Assignation operator called " << std::endl;
    this->_Name = ref.getName();
    this->_Hitpoints = ref.getHP();
    this->_EnergyPoints = ref.getEP();
    this->_AttackDamage = ref.getAD();
    return (*this);
}

void            DiamondTrap::WhoAmI( void ) const
{
    std::cout << "DIAMONDTRAPS NAME :" << this->_Name << std::endl;
    std::cout << "_________________________________________________" << std::endl;
    showConditions();
    std::cout << "FOR CHECK: HP of FRAGTRAPS = 100. AD of FRAGTRAPS = 30. EP of SCAVTRAP = 50" << std::endl; 
}

unsigned int    DiamondTrap::getFragsHP( void ) const
{
    return (this->fragHP);
}
unsigned int    DiamondTrap::getFragsAD() const
{
    return (this->fragAD);
}