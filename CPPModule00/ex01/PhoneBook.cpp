#include "PhoneBook.hpp"
#include "Contact.hpp"

void PhoneBook::Searcj(/* args */)
{
	std::string str;
	std::cout << "|-------------------------------------------------------|" << std::endl;
	std::cout << "|    INDEX    | FIRST  NAME |  LAST NAME  |   NICKNAME  |" << std::endl;
	std::cout << "|-------------------------------------------------------|" << std::endl;
	for (int i=0; i < this->max ; i++)
	{
		if (this->contacts[i].cmp())
			this->contacts[i].print();
	}
	std::cout << std::string(57, '-') << std::endl;
	std::cout << "Write index to get info about contact:\n>";
	if(!std::getline(std::cin, str))
			return ;
	else if (str[1])
	{
		std::cout << "WRONG INDEX\n";
		return ;
	}
	else if (str[0] > 47 && str[0] < 58)
	{
		int n;
		n = atoi(str.c_str());
		this->contacts[n].PrintIndex();
	}
}

void PhoneBook::Add(/* args */)
{
	if (this->max == this->current)
		this->current = 0;
	if (contacts[this->current].add(this->current) == true)
			this->current++;
}

PhoneBook::~PhoneBook()
{
	std::cout << "Destruct PhoneBook\n";
}
PhoneBook::PhoneBook()
{
	this->max = 8;
	this->current = 0;
}