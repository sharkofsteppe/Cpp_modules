#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>
#include <iostream>

class Animal
{
protected:
    std::string _type;
public:
    Animal( std::string name );
    Animal( Animal const &ref );
    Animal & operator=( Animal const &ref );
    Animal( void );
    virtual         ~Animal( void );
    std::string     getType( void ) const;
    virtual void    makeSound() const = 0;
};



#endif