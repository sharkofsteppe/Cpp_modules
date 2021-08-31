#include "Contact.hpp"
#include "PhoneBook.hpp"

Contact& Contact::SetFirst(void)
{
	std::cout << "Enter the firstname!" << std::endl;
	std::getline(std::cin, FirstName);
	return *this;
}

Contact& Contact::SetIndex(int i)
{
	index = i + 1;
	return *this;	
}

Contact& Contact::SetLast(void)
{
	std::cout << "Enter the surname!" << std::endl;
	std::getline(std::cin, LastName);
	
	return *this;
}

Contact& Contact::SetNick(void)
{
	std::cout << "Enter the Nick!" << std::endl;
	std::getline(std::cin, NickName);
	
	return *this;
}
Contact& Contact::SetPhone(void)
{
	std::cout << "Enter the Phone number!" << std::endl;
	std::getline(std::cin, PhoneNumber);
	return *this;
}

Contact& Contact::SetSecret(void)
{
	std::cout << "Enter the Secret of this person!" << std::endl;
	std::getline(std::cin, DarkestSecret);
	std::cout << "Data of the contact is filled!Please, enter new command:\n1.ADD(if you want to create a new contact).\n2.SEARCH(if you want to find exact contact)\n3.EXIT(to leave the PhoneBook)!" << std::endl;
	return *this;
}

void	Contact::printstr(std::string str)
{
	if (str.length() > 10)
		std::cout << "|" <<std::setw(9) << str.substr(0, 9) << "." ;
	else
		std::cout << "|" <<std::setw(9) << str.substr(0, 9);
}

void	Contact::print(int sig)
{
	if (sig == 1)
	{	
		std::cout << "|" <<std::setw(9) << index;
		printstr(FirstName);
		printstr(LastName);
		printstr(NickName);
		std::cout << "|"  << std::endl;
	}
	if (sig == 2)
	{
		std::cout << "Index: " <<index << std::endl;;
		std::cout << "First name: " << FirstName << std::endl;;
		std::cout  << "Last name: " << LastName << std::endl;;
		std::cout  << "Nickname: " << NickName << std::endl;;
		std::cout  << "Phone number: " << PhoneNumber << std::endl;;
		std::cout  << "Secret: " << DarkestSecret << std::endl;
	}
}