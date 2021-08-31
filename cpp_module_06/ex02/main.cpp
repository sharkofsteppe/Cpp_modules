#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <cstdlib>
#include <ctime>
#include <string>
#include <iostream>

Base* generate(void)
{
    srand ( time(NULL) );
    switch (rand() % 3)
    {
        case 0:
            std::cout << "Class A creation" << '\n';
            return (new A());
        case 1:
            std::cout << "Class B creation" << '\n';
            return (new B());
        case 2:
            std::cout << "Class C creation" << '\n';
            return (new C());
        default:
            break;
    }
    return (0);
}

void    identify(Base *p)
{
    if (dynamic_cast<A*>(p))
        std::cout << "Pointer was identified as A class" << "\n";
    else if (dynamic_cast<B*>(p))
        std::cout << "Pointer was identified as B class" << "\n";
    else if (dynamic_cast<C*>(p))
        std::cout << "Pointer was identified as C class" << "\n";
}

void    identify(Base   &p)
{
    if (dynamic_cast<A*>(&p))
        std::cout << "|Pointer was identified as A class" << "\n";
    else if (dynamic_cast<B*>(&p))
        std::cout << "|Pointer was identified as B class" << "\n";
    else if (dynamic_cast<C*>(&p))
        std::cout << "|Pointer was identified as C class" << "\n";
}

int     main()
{
    Base *ptr;

    ptr = generate();
    identify(*ptr);
    identify(ptr);
    return (0);
}