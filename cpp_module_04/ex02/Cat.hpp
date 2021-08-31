#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal
{

public:
    Cat( std::string name );
    Cat( Cat const &ref );
    Cat & operator=( Cat const &ref );
    Cat( void );
    ~Cat( void );
    virtual void    makeSound() const;
};

#endif