#include "Form.hpp"

Form::Form(const std::string name, int signgrade, int execgrade, std::string const & target) : _name(name), 
                                                                   _indicate(false),
                                                                   _sign_grade(signgrade),
                                                                   _exec_grade(execgrade),
                                                                   _target(target)
{
    if ( this->_sign_grade <= 0 || this->_exec_grade <= 0)
		throw Form::GradeTooHighException();
	else if (this->_sign_grade > 150 || this->_exec_grade > 150)
		throw Form::GradeTooLowException();
}

Form::~Form()
{
}

Form::Form(Form const & ref) : _name(ref.getName()), _target(ref.getTarget())
{
    if (ref.getSignGrade() <= 0 || ref.getExecGrade() <= 0)
		throw Form::GradeTooHighException();
	else if (ref.getSignGrade() > 150 || ref.getExecGrade() > 150)
		throw Form::GradeTooLowException();
    this->_sign_grade = ref.getSignGrade();
    this->_exec_grade = ref.getExecGrade();
    this->_indicate = ref.getIndicator();
}

Form & Form::operator=( Form const &ref )
{
    if (ref.getSignGrade() <= 0 || ref.getExecGrade() <= 0)
		throw Form::GradeTooHighException();
	else if (ref.getSignGrade() > 150 || ref.getExecGrade() > 150)
		throw Form::GradeTooLowException();
    this->_sign_grade = ref.getSignGrade();
    this->_exec_grade = ref.getExecGrade();
    this->_indicate = ref.getIndicator();
    return (*this);
}

int    Form::getIndicator() const
{
    return (this->_indicate);
}

std::string const   Form::getName() const
{
    return (this->_name);
}


int        Form::getSignGrade(void) const
{
    return (this->_sign_grade);
}

int        Form::getExecGrade(void) const
{
    return (this->_exec_grade);
}

void                Form::beSigned(Bureaucrat & bureao)
{
    if (bureao.getGrade() <= this->getSignGrade())
        this->_indicate = true;
    else
        throw   Form::GradeTooLowException();
}


const char* Form::GradeTooHighException::what() const throw()
{
    return ("TOO HIGH");
}

const char* Form::GradeTooLowException::what() const throw()
{
    return ("Grade of bureaucrat is not high enough to sign this paper");
}


std::ostream	&operator<<(std::ostream & out, const Form & form)
{
	out << form.getName() << " is ";

	if (form.getIndicator() == false)
		out << "not signed, ";
	else
		out << "signed, ";
	
	out << "it is signable at grade : " << form.getSignGrade();
	out << " and executable at grade : " << form.getExecGrade() << "." << std::endl;

	return (out);
}

std::string const   Form::getTarget(void) const
{
    return (this->_target);
}

void                Form::execute(Bureaucrat const & executor) const 
{
    if (this->_indicate == false)
        throw std::string("is not signed");
    else if (executor.getGrade() > this->getExecGrade())
        throw std::string("cannot be executed by a bureaucrat with such low grade");
    this->Action();
}
