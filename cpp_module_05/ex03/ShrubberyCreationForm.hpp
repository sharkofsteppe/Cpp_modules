#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"

class ShrubberyCreationForm : public Form
{

private:
    void    Action() const;
public:
    ShrubberyCreationForm(std::string const &target);
    ~ShrubberyCreationForm();
    ShrubberyCreationForm(ShrubberyCreationForm const & ref);
    ShrubberyCreationForm & operator=(ShrubberyCreationForm const &ref);
};




#endif