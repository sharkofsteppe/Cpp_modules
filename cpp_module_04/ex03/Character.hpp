#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"

class Character : public ICharacter
{
public:
    static const int    _size = 4;
    std::string         _name;
    AMateria*           _bag[_size];
public:
    Character( void ){};
    ~Character();
    Character( std::string name);
    Character( Character const &ref );
    Character & operator=( Character const &ref );

    std::string const &     getName() const;
    void                    equip(AMateria* m);
    void                    unequip(int idx);
    void                    use(int idx, ICharacter& target);

};




#endif