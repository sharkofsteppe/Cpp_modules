#include "Bureaucrat.hpp"

int     main()
{
    try
    {
        Bureaucrat first("John", 1);
        std::cout << first << std::endl;
        for(int i = 0; i < 149;i++)
            first.gradeIncrement();
        std::cout << first << std::endl;
        Bureaucrat sec("Johny", 151);
        std::cout << first << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    return (0);
}