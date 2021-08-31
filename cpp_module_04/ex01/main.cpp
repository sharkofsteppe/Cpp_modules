#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "unistd.h"
#include "Brain.hpp"



int     main()
{
    Animal  *ptr[4] = {new Dog(), new Dog(), new Cat(), new Cat()};
    
    ptr[0]->fieldcontrol()->setprop("bell");
    std::cout << ptr[0]->fieldcontrol()->getprop() << std::endl;
    ptr[0]->makeSound();
    std::cout << ptr[0]->getType()<< std::endl;
    
    ptr[2]->fieldcontrol()->setprop("stringer");
    std::cout << ptr[2]->fieldcontrol()->getprop() << std::endl;
    ptr[2]->makeSound();
    std::cout << ptr[2]->getType()<< std::endl;


   
    Dog anydog;
    Dog samedog;
    anydog = samedog;
    std::cout << &samedog.getBrain() << std::endl;
    std::cout << &anydog.getBrain() << std::endl;


    Cat somecat(*((Cat *)ptr[2]));
    std::cout << &ptr[2] << std::endl;
    std::cout << &somecat << std::endl;
    std::cout << &somecat.getBrain() << std::endl;

    for(int i = 0; i < 4; i++)
    {
        delete ptr[i];
    }
    return (0);
}