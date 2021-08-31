#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria
{
private:
    /* data */
public:
    Cure(void);
    ~Cure(void);
    Cure( Cure const &ref );
    Cure & operator=( Cure const &ref );

    AMateria*   clone( void ) const;
    void        use( ICharacter & target );

};

#endif