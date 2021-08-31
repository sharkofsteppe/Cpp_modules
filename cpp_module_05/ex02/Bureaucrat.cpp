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

void                Bureaucrat::signForm(Form & form)
{
    if (form.getIndicator() == true)
        std::cout << this->getName() << " cannot sign the form which already signed XD" << std::endl;
    else
    {
        try
        {
            form.beSigned(*this);
            std::cout << this->getName() << " signs the form XD" << std::endl;
        }
        catch(const std::exception& e)
        {
            std::cout << this->getName() << " cannot sign the form because" << std::endl;
            std::cerr << e.what() << '\n';
        }
    }
}

void                Bureaucrat::executeForm(Form const & form)
{
    try
    {
        form.execute(*this);
        std::cout << this->getName() << " executes " << form.getName() << std::endl;
    }
    catch(std::string str)
    {
        std::cout << this->getName() << " cannot execute " << form.getName() << std::endl;
        std::cout << "beacuse aforementioned form  " << str << '\n';
    }
    
}


std::ostream    &   operator<<( std::ostream &out, Bureaucrat const &point )
{
    out << point.getName() << ", grade " << point.getGrade()<< std::endl;
    return (out);
}