
#include "repl.hpp"

int main(int argc, char **argv)
{
    if (argc == 4)
    {
        Repl    p(argv);
        if (p.opener())
            return (1);
        p.replacer();
    }
    else
    {
        std::cout << "Error: Arguments!" << std::endl;
        return (1);
    }
    return (0);
}