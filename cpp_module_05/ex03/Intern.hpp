#ifndef INTERN_HPP
#define INTERN_HPP

#include <string>
#include "Form.hpp"
class Intern;

class Intern
{
private:
    /* data */
public:
    Intern();
    ~Intern();
    Intern(Intern const & ref);
    Intern & operator=(Intern const &ref);

    class ExceptionInternDoesntKnow : public std::exception
    {
    public:
        virtual const char* what() const throw();
    };
    
    Form*    makeForm(std::string const &name, std::string const &target);
};

#endif