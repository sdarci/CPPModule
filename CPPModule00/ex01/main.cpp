#include "Contact.hpp"
#include "PhoneBook.hpp"

int	main()
{
	PhoneBook test;
	std::string str;
	while (1)
	{
		std::cout << ">";
		if(!std::getline(std::cin, str))
			break ;
		if (str == "SEARCH")
			test.Searcj();
		else if (str == "ADD")
			test.Add();
		else if (str == "EXIT")
			break;
		else
			std::cout << "wrong command" << std::endl;
	}
	return (0);
}