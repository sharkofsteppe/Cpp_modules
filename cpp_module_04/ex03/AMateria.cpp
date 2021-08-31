#include "AMateria.hpp"

AMateria::AMateria( std::string const & type) : _type(type)
{
}

AMateria::AMateria( AMateria const &ref )
{
    _type = ref.getType();
}

AMateria & AMateria::operator=( AMateria const &ref )
{
    this->_type = ref.getType();
    return (*this);
}

std::string const & AMateria::getType() const
{
    return(this->_type);
}


//    AMateria( AMateria const &ref );
//     AMateria & operator=( AMateria const &ref );
//     virtual ~AMateria();
//     std::string const & getType() const;
    // virtual void use(ICharacter & target);
