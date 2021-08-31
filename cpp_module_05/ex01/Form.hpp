#ifndef FORM_HPP
#define FORM_HPP

#include <string>
#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;
class Form;

class Form
{
protected:
    std::string const       _name;
    bool                    _indicate;
    int                     _sign_grade;
    int                     _exec_grade;
public:
/*______________________ANNOYINGS________________________________*/
    Form(std::string const  name, int grade, int execgrade);
    virtual ~Form();
    Form(Form const & ref);
    Form & operator=(Form const &ref );

/*______________________EXCEPTIONS________________________________*/

    class GradeTooHighException : public std::exception
    {
    private:
        /* data */
    public:
        virtual const char* what() const throw();
    };

    class GradeTooLowException : public std::exception
    {
    private:
        /* data */
    public:
        virtual const char* what() const throw();
    };

/*______________________METHODS________________________________*/

    int        getIndicator(void) const;
    int        getSignGrade(void) const;
    int        getExecGrade(void) const;
    std::string const   getName(void) const;
    void                beSigned(Bureaucrat & bureao);
};


#endif