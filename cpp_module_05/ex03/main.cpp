#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"

int     main()
{
    Bureaucrat  Jacob("Jacob", 1);
    Bureaucrat  Sacob("Sacob", 150);
    Intern      William;
    Form        *any;

    try
    {
        any = William.makeForm("Shrubbery Creation Form", "Hyde Park");
        Jacob.signForm(*any);
        Sacob.executeForm(*any);
        Jacob.executeForm(*any);
        delete any;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    return (0);
}