#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <string>
#include <iostream>
#include "Form.hpp"

class Form;
class Bureaucrat;


class Bureaucrat
{
private:
    std::string const _name;
    int      _grade;

public:

/*____________________ANNOYINGS___________________________*/

    Bureaucrat(std::string const  name, int grade);
    ~Bureaucrat();
    Bureaucrat(Bureaucrat const & ref);
    Bureaucrat & operator=( Bureaucrat const &ref );

/*____________________EXCEPTIONS___________________________*/

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

/*____________________METHODS______________________________*/


    int                 getGrade(void) const;
    std::string const   getName(void) const;

    void                gradeIncrement(void);
    void                gradeDecrement(void);

    void                signForm(Form & form);
    void                executeForm(Form const & form);
};

std::ostream    &   operator<<( std::ostream &out, Bureaucrat const &point );




#endif