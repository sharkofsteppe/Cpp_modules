#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"

class PresidentialPardonForm : public Form
{
private:
    void    Action() const;
public:
    PresidentialPardonForm(std::string const &target);
    ~PresidentialPardonForm();
    PresidentialPardonForm(PresidentialPardonForm const & ref);
    PresidentialPardonForm & operator=(PresidentialPardonForm const &ref);
};

#endif