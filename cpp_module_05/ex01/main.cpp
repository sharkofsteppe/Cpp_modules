#include "Bureaucrat.hpp"

int     main()
{
    Form forma("Paper", 10, 5);
    Bureaucrat john("John", 1);
    Bureaucrat sean("Sean", 11);

    try
    {
        // john.signForm(forma);
        sean.signForm(forma);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    return (0);
}