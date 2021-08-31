#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria
{
private:
    /* data */
public:
    Ice(void);
    ~Ice(void);
    Ice( Ice const &ref );
    Ice & operator=( Ice const &ref );

    AMateria*   clone( void ) const;
    void        use( ICharacter & target );

};

#endif