#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    for (int i = 0; i < 4; i++)
    {
        this->_bag[i] = NULL;
    }
}

MateriaSource::~MateriaSource()
{
    for (int i = 0; i < 4; i++)
    {
        if (this->_bag[i])
            delete this->_bag[i];
    }
}

MateriaSource::MateriaSource( MateriaSource const &ref )
{
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

MateriaSource & MateriaSource::operator=( MateriaSource const &ref )
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

void    MateriaSource::learnMateria(AMateria *m)
{
    int i;

    for(i = 0; i < 4; i++)
    {
        if (i < 4 && this->_bag[i] == NULL)
        {
            this->_bag[i] = m;
            return ;
        }
            
    }
}

AMateria*   MateriaSource::createMateria(std::string const & type)
{
    for (int i = 0; i < 4; i++)
    {
        if ( this->_bag[i] != NULL && this->_bag[i]->getType() == type )
        {
            return (this->_bag[i]->clone());
        }
    }
    return (NULL);
}
