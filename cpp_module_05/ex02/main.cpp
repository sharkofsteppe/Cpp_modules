#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

int     main()
{
    Bureaucrat Jacob("Jacob", 1);
    Bureaucrat Sacob("Sacob", 150);
    RobotomyRequestForm first("Metal Industria");
    PresidentialPardonForm second("Abu Bacre Al-Bagdadi");
    ShrubberyCreationForm third("Kensington Gardens");
    try
    {
        Jacob.executeForm(third);
        std::cout << first.getName();

        Jacob.signForm(third);
        Jacob.signForm(second);
        Jacob.signForm(first);

        Sacob.executeForm(third);

        Sacob.executeForm(first);

        Sacob.executeForm(second);


    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    return (0);
}