#include "Cure.hpp"

Cure::Cure( void )
{
    _type = "cure";
}

Cure::~Cure()
{
}

Cure::Cure( Cure const &ref )
{
    _type = ref.getType();
}
Cure & Cure::operator=( Cure const &ref )
{
    this->_type = ref.getType();
    return (*this);
}

AMateria*   Cure::clone( void ) const
{
    return (new Cure());
}
void        Cure::use( ICharacter & target )
{
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}