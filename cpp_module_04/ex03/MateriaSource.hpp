#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
public:
    AMateria*   _bag[4];
public:
    MateriaSource(/* args */);
    ~MateriaSource();

   MateriaSource( std::string name);
   MateriaSource( MateriaSource const &ref );
   MateriaSource & operator=( MateriaSource const &ref );

    void        learnMateria(AMateria *m);
    AMateria*   createMateria(std::string const & type);
};


#endif