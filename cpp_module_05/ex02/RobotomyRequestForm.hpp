#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"

class RobotomyRequestForm : public Form
{

private:
    void    Action() const;
public:
    RobotomyRequestForm(std::string const &target);
    ~RobotomyRequestForm();
    RobotomyRequestForm(RobotomyRequestForm const & ref);
    RobotomyRequestForm & operator=(RobotomyRequestForm const &ref);
};




#endif