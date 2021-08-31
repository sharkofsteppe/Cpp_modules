#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "unistd.h"


int     main()
{
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound();
    j->makeSound();

    delete j;
    delete i;
    return (0);
}