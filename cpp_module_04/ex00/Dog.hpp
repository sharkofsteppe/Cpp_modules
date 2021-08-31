#ifndef DOG_HPP
#define DOG_HPP
#include "Animal.hpp"

class Dog : public Animal
{

public:
    Dog( std::string name );
    Dog( Dog const &ref );
    Dog & operator=( Dog const &ref );
    Dog( void );
    ~Dog( void );
    virtual void    makeSound() const;
};

#endif