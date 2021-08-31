#include "Intern.hpp"
#include "Form.hpp"

Intern::Intern(){};
Intern::~Intern(){};

Intern::Intern(Intern const & ref)
{
    (void)ref;
}
Intern & Intern::operator=(Intern const &ref)
{
    return(*this);
}

void    Intern::makeForm(std::string const &name, std::string const &target)
{
    std::string arr[3] = {"Robotomy Request Form", "Shrubbery Creation Form", "Presidential Pardon Form"};
    int i;

    while (arr[i] != name && i < 3)
        i++;
    
}


