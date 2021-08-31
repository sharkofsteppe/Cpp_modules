#ifndef ICHARACTER_HPP
#define ICHARACTER_HPP

class ICharacter;
#include "AMateria.hpp"

class ICharacter
{
public:
    ICharacter(void){};
    virtual ~ICharacter(){};

    virtual std::string const &getName() const = 0;

    virtual void    equip(AMateria* m) = 0;
    virtual void    unequip(int idx) = 0;
    virtual void    use(int idx, ICharacter& target) = 0;
};

#endif