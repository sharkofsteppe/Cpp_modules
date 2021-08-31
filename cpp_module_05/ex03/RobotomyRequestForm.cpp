#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm( std::string const &target ) : Form("Robotomy Request Form", 72, 45, target)
{
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}


RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & ref) : Form( ref )
{
}

RobotomyRequestForm & RobotomyRequestForm::operator=(RobotomyRequestForm const &ref)
{
    Form::operator=( ref );
    return (*this);
}

void    RobotomyRequestForm::Action() const
{
    std::cout << "* SOME DRILLING NOISE *" << std::endl;
    if ((1 + (rand() % 3)) == 2)
        std::cout << this->getTarget() << " has been robotomized successfully 50% of the time " <<std::endl;
    else
        std::cout << this->getTarget() << " has not been robotomized" <<std::endl;
}

