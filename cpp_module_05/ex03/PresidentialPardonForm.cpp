#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm( std::string const &target ) : Form("Presidential Pardon Form", 25, 5, target)
{
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}


PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & ref) : Form( ref )
{
}

PresidentialPardonForm & PresidentialPardonForm::operator=(PresidentialPardonForm const &ref)
{
    Form::operator=( ref );
    return (*this);
}

void    PresidentialPardonForm::Action() const
{
    std::cout << this->getTarget() << " has been pardoned by Zafod Beeblebrox" << std::endl;
}
