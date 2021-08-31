#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(const std::string name, int grade) : _name(name), _grade(grade)
{
    if (this->getGrade() < 1)
        throw Bureaucrat::GradeTooHighException();
    if (this->getGrade() > 150)
        throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::~Bureaucrat()
{
}

Bureaucrat::Bureaucrat(Bureaucrat const & ref) : _name(ref.getName())
{
    this->_grade = ref.getGrade();
}
Bureaucrat & Bureaucrat::operator=( Bureaucrat const &ref )
{
    this->_grade = ref.getGrade();
    return (*this);
}




int    Bureaucrat::getGrade() const
{
    return (this->_grade);
}

std::string const   Bureaucrat::getName() const
{
    return (this->_name);
}





const char* Bureaucrat::GradeTooHighException::what() const throw()
{
    return ("TOO HIGH");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
    return ("TOO LOW");
}

void                Bureaucrat::gradeIncrement(void)
{
    this->_grade++;
    if (this->getGrade() > 150)
        throw Bureaucrat::GradeTooLowException(); 
}

void                Bureaucrat::gradeDecrement(void)
{
    this->_grade--;
    if (this->getGrade() < 1)
        throw Bureaucrat::GradeTooHighException();
}


std::ostream    &   operator<<( std::ostream &out, Bureaucrat const &point )
{
    out << point.getName() << ", grade " << point.getGrade()<< std::endl;
    return (out);
}