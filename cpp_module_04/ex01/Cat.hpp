#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
private:
    Brain   *_cptr;
public:
    Cat( Cat const &ref );
    Cat & operator=( Cat const &ref );
    Cat( void );
    ~Cat( void );
    virtual void    makeSound() const;
    virtual Brain * fieldcontrol();
    Brain   &   getBrain( void );


};

#endif