#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm( std::string const &target ) : Form("Shrubbery Creation Form", 145, 137, target)
{
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}


ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & ref) : Form( ref )
{
}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(ShrubberyCreationForm const &ref)
{
    Form::operator=( ref );
    return (*this);
}

void    ShrubberyCreationForm::Action() const
{
    std::ofstream file;

    file.open(std::string(this->getTarget() + "_shrubbery").c_str(), std::ios::out | std::ios::app);
    if (file.is_open())
    {
		file << "                 # #### ####			" << std::endl;
        file << "               ### \\/#|### |/####		" << std::endl;
        file << "              ##\\/#/ \\||/##/_/##/_#	" << std::endl;
        file << "            ###  \\/###|/ \\/ # ###	" << std::endl;
        file << "          ##_\\_#\\_\\## | #/###_/_####" << std::endl;
        file << "         ## #### # \\ #| /  #### ##/##	" << std::endl;
        file << "          __#_--###`  |{,###---###-~	" << std::endl;
        file << "                    \\ }{				" << std::endl;
        file << "                     }}{				" << std::endl;
        file << "                     }}{				" << std::endl;
        file << "                     {{}				" << std::endl;
        file << "               , -=-~{ .-^- _			" << std::endl;
        file << "                     `}				" << std::endl;
        file << "                      {				" << std::endl;
		file.close();
    }
}

