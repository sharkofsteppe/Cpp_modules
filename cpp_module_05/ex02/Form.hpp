#ifndef FORM_HPP
#define FORM_HPP

#include <string>
#include <iostream>
#include <fstream>
#include "Bureaucrat.hpp"

class Bureaucrat;
class Form;

class Form
{
private:
    std::string const       _name;
    bool                    _indicate;
    int                     _sign_grade;
    int                     _exec_grade;
    std::string const       _target;
    virtual void            Action() const = 0;
public:
/*______________________ANNOYINGS________________________________*/

    Form(std::string const  name, int grade, int execgrade,std::string const & target);
    ~Form();
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

/*______________________ACCESORS________________________________*/

    int                 getIndicator(void) const;
    int                 getSignGrade(void) const;
    int                 getExecGrade(void) const;
    std::string const   getName(void) const;
    std::string const   getTarget(void) const;
/*______________________METHODS________________________________*/    
    void                beSigned(Bureaucrat & bureao);
    void                execute(Bureaucrat const & executor) const;
};


#endif