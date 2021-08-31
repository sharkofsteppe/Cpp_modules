#include "Karen.hpp"

int main(int argc, char **argv)
{
    Karen        p;
    std::string str;
    (void)argc;

    str = argv[1];
    p.complain(str);

    return (0);
}