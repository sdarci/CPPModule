#include "Contact.hpp"

std::string Contact::names[5] = {
	"First name",
	"Last name",
	"Nickname",
	"Phone number",
	"Secret"
};

bool	Contact::add(int index)
{
	int i;
	this->index = index;
	std::cout << index << std::endl;
	for (int i = 0; i < 5; i++)
	{	
		std::cout << names[i] << ":";
		if(!std::getline(std::cin, this->filed[i]))
			return (false) ;
	}
	i = 0;
	while (i < 5)
	{
		if (this->filed[i].length() == 0)
		{
			for (int j = 0; j < 5; j++)
				this->filed[j] = std::string();
			return (false);
		}
		i++;
	}
	return (true);
}

void Contact::print()
{
	std::cout << "|" << std::setw(13) << this->index;
	int i = 0;
	while (i < 3)
	{
		std::cout << "|";
		if (this->filed[i].length() > 10)
			std::cout << "   "<< this->filed[i].substr(0,9) << ".";
		else
			std::cout << std::setw(13) << this->filed[i];
		i++;
	}
	std::cout << "|" << std::endl;

}

bool Contact::cmp()
{
	if (this->filed[0].length() > 0)
		return (true);
	return (false);
}
Contact::~Contact()
{
	std::cout << "DESTRUCT CONTACT" << std::endl;
}
void	Contact::PrintIndex()
{
	if (this->filed[0].length() == 0)
	{
		std::cout << "[ERROR] wrong index" << std::endl;
		return ;
	}
	else
	{
		for (int i = 0; i < 5; i++)
			std::cout << names[i] << ": " << filed[i] << std::endl;
	}

}