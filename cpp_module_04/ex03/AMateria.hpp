#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>
#include <string>
class AMateria;
#include "ICharacter.hpp"

class AMateria
{
protected:
    std::string _type;
public:
    AMateria(void){};
    virtual ~AMateria(){};

    AMateria( std::string const & type );
    AMateria( AMateria const &ref );
    AMateria & operator=( AMateria const &ref );
    
    std::string const & getType() const;

    virtual AMateria*   clone() const = 0;
    virtual void        use(ICharacter & target) = 0;
   
};



#endif