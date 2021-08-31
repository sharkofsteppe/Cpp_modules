#include "Intern.hpp"
#include "Form.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"

Intern::Intern(){};
Intern::~Intern(){};

Intern::Intern(Intern const & ref)
{
    (void)ref;
}
Intern & Intern::operator=(Intern const &ref)
{
    (void)ref;
    return(*this);
}

const char* Intern::ExceptionInternDoesntKnow::what() const throw()
{
    return ("Does not know the form");
}

Form*    Intern::makeForm(std::string const &name, std::string const &target)
{
    Form *ptr;
    std::string arr[4] = {"Robotomy Request Form", "Shrubbery Creation Form", "Presidential Pardon Form", "empty"};
    int i;

    i = 0;
    while (arr[i] != name && i < 4)
        i++;
    switch (i)
    {
    case 0:
        std::cout << "Intern creates Robotomy request form" << std::endl;
        ptr = new RobotomyRequestForm(target);
        return (ptr);
    case 1:
        std::cout << "Intern creates Shrubbery creation form" << std::endl;
        ptr = new ShrubberyCreationForm(target);
        return (ptr);
    case 2:
        std::cout << "Intern creates Presidential pardon form " << std::endl;
        ptr = new PresidentialPardonForm(target);
        return (ptr);
    default:
        std::cout << "Intern does not know followong form XD" << std::endl;
        throw Intern::ExceptionInternDoesntKnow();
    }
    return (0);
}
