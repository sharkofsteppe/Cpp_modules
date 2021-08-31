#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"
#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include <unistd.h>

int main()
{
    IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
    ICharacter* me = new Character("me");
    std::cout << ((Character*)me)->getName() << std::endl;



    // he.equip()


    ICharacter* he = new Character("m");
    ICharacter* she = new Character("mse");


    AMateria* tmp;
    tmp = src->createMateria("ice");
    he->equip(tmp);
    she = he;

    she->unequip(0);
    std::cout << ((Character*)he)->_bag[0]->getType()<< '\n';
        std::cout << ((Character*)she)->_bag[0]->getType()<< '\n';


    // tmp = src->createMateria("cure");
    // me->equip(tmp);
    // tmp = src->createMateria("cure");
    // me->equip(tmp);
    // tmp = src->createMateria("cure");
    // me->equip(tmp);
    // me->unequip(3);
    // tmp = src->createMateria("ice");
    // me->equip(tmp);
    

    // std::cout << ((MateriaSource*)src)->_bag[0]->getType() << std::endl; /*what's source containing*/
    // std::cout << ((MateriaSource*)src)->_bag[1]->getType() << std::endl;
    
    // std::cout << ((Character*)me)->_bag[0]->getType() << std::endl; /*what's character's bag containing*/
    // std::cout << ((Character*)me)->_bag[1]->getType() << std::endl;
    // std::cout << ((Character*)me)->_bag[2]->getType() << std::endl;
    // std::cout << ((Character*)me)->_bag[3]->getType() << std::endl;

    // ICharacter* bob = new Character("bob");
    // me->use(0, *bob);
    // me->use(1, *bob);
    // me->use(2,*bob);
    // delete bob;
    // delete me;
    // delete src;
    return 0;
}