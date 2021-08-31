#include "Ice.hpp"

Ice::Ice( void )
{
    _type = "ice";
}

Ice::~Ice()
{
}

Ice::Ice( Ice const &ref )
{
    _type = ref.getType();
}
Ice & Ice::operator=( Ice const &ref )
{
    this->_type = ref.getType();
    return (*this);
}

AMateria*   Ice::clone( void ) const
{
    return (new Ice());
}
void        Ice::use( ICharacter & target )
{
    std::cout << "* shoots an ice bolt at " << target.getName() << std::endl;
}