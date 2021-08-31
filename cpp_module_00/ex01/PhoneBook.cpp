#include "PhoneBook.hpp"
#include "Contact.hpp"

void	PhoneBook::Update(int &i)
{
	if (i == 8)
	{
		for(int j = 0; j < 7; j++)
		{
			arr[j] = arr[j + 1];
			arr[j].SetIndex(j);
		}
		i = 7;
	}
	arr[i].SetIndex(i).SetFirst().SetLast().SetNick().SetPhone().SetSecret();
	i++;
}

void	PhoneBook::access(int i, int sig)
{
	if (sig == 1)
		arr[i].print(1);
	if (sig == 2)
		arr[i].print(2);
}

int	main(void)
{
	std::string	command;
	PhoneBook	data;
	int			i, j, n;

	i = 0;
	std::cout << "Hello!PLEASE, TYPE ONE OF THE FOLLOWING COMMANDS:\n1.ADD(if you want to create a new contact).\n2.SEARCH(if you want to find exact contact)\n3.EXIT(to close the PhoneBook)!" << std::endl;

	while (std::getline(std::cin, command))
	{
		if ((command.compare("ADD")) == 0 || (command.compare("1")) == 0)
			data.Update(i);
		if ((command.compare("SEARCH")) == 0 || (command.compare("2")) == 0)
		{
			j = -1;
			while (++j < i)
				data.access(j, 1);
			if (i != 0)
			{
				std::cout << "Please, choose the contact you need to open information list!" << std::endl;
				std::getline(std::cin, command);
				if (command.find_first_not_of("123456789") == std::string::npos)
				{
					std::stringstream str(command);
					str >> n;
					data.access(n - 1, 2);
					std::cout << "PLEASE, TYPE ONE OF THE FOLLOWING COMMANDS:\n1.ADD(if you want to create a new contact).\n2.SEARCH(if you want to find exact contact)\n3.EXIT(to close the PhoneBook)!" << std::endl;
				}
				else
					std::cout << "Index not found!" << std::endl;
			}
		}
		if ((command.compare("EXIT")) == 0)
			break ;
	}
	return (0);
}