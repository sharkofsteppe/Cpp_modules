#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
private:
    Brain   *_dptr;
public:

    Dog( std::string name );
    Dog( Dog const &ref );
    Dog & operator=( Dog const &ref );
    Dog( void );
    ~Dog( void );
    virtual void    makeSound() const;
    virtual Brain * fieldcontrol();
    Brain   &   getBrain( void );
};

#endif