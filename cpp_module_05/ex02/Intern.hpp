#ifndef INTERN_HPP
#define INTERN_HPP

#include <string>

class Intern
{
private:
    /* data */
public:
    Intern(){};
    ~Intern(){};
    Intern(Intern const & ref);
    Intern & operator=(Intern const &ref);

    void    makeForm(std::string const &name, std::string const &target);
};

#endif