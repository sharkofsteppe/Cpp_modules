#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

# include <iostream>
# include <iomanip>
# include <string>
# include <sstream>
# include "Contact.hpp"

class PhoneBook
{
private:
	Contact	arr[8];
public:
	PhoneBook() {};
	~PhoneBook() {};
	void	Update(int &i);
	void	access(int i, int sig);
};

#endif