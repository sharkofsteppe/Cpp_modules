#include "Character.hpp"

Character::Character( std::string name) : _name(name)
{
    for (int i = 0; i < 4; i++)
    {
        this->_bag[i] = NULL;
    }
}

Character::~Character()
{
    for (int i = 0; i < 4; i++)
    {
        if (this->_bag[i])
            delete this->_bag[i];
    }
}

Character::Character( Character const &ref )
{
    this->_name = ref.getName();
    for (int i = 0; i < 4; i++)
    {
        if (this->_bag[i])
            delete this->_bag[i];
    }
    for (int i = 0; i < 4; i++)
    {
        if (ref._bag[i])
            this->_bag[i] = ref._bag[i]->clone();
    }
    
}

Character & Character::operator=( Character const &ref )
{
     for (int i = 0; i < 4; i++)
    {
        if (ref._bag[i])
            this->_bag[i] = ref._bag[i];
        else
            this->_bag[i] = NULL;
    }
    return (*this);
}

std::string const &     Character::getName() const
{
    return(this->_name);
}

void        Character::equip(AMateria* m)
{
    int i;
    for (i = 0; i < 4; i++)
    {
        if ( this->_bag[i] == NULL )
        {
          this->_bag[i] = m;
          return ;
        }
    }
    delete m;
}

void                    Character::unequip(int idx)
{
    if (idx >= 0 && idx < 4)
    {
        this->_bag[idx] = NULL;
    }
}

void                    Character::use(int idx, ICharacter& target)
{
    if (idx >= 0 && idx < 4 )
    {
        if (this->_bag[idx] == NULL)
            return ;
        this->_bag[idx]->use(target);
    }
}