#ifndef CONTACT_HPP
#define CONTACT_HPP

# include <iostream>
# include <iomanip>
# include <string>
# include <sstream>
#include "PhoneBook.hpp"


class	Contact
{
private:
	int			index;
	std::string	FirstName;
	std::string	LastName;
	std::string	NickName;
	std::string	PhoneNumber;
	std::string	DarkestSecret;
public:

	Contact&	SetIndex(int i);
	Contact&	SetFirst();
	Contact&	SetLast();
	Contact&	SetNick();
	Contact&	SetPhone();
	Contact&	SetSecret();
	void		printstr(std::string str);
	void		print(int sig);
};

#endif