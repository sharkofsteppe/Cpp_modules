#include <string>
#include <iostream>


struct Data
{
    std::string str1;
    std::string str2;
    int         num;
};

uintptr_t serialize(Data* ptr)
{
    uintptr_t p;

    p = reinterpret_cast<uintptr_t>(ptr);
    return (p);
}

Data* deserialize(uintptr_t raw)
{
    Data *ptr;
    
    ptr = reinterpret_cast<Data*>(raw);
    std::cout << ptr << '\n';

    return (ptr);
}

int main()
{
    uintptr_t   ptr;
    Data        dataptr;
    Data        *newone;

    dataptr.str1 = "HEllO";
    dataptr.str2 = "WORLD";
    dataptr.num = 1586;

    ptr = serialize(&dataptr);

    std::cout << &dataptr << std::endl;

    newone = deserialize(ptr);
    std::cout << newone << '\n';
    std::cout << newone->num << '\n' << newone->str1 << '\n' << newone->str2 << std::endl;
    return (0);
}

