#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"
class PhoneBook
{
private:
	/* data */
	Contact contacts[8];
	int		max;
	int		current;
public:
	PhoneBook(/* args */);
	~PhoneBook();
	void Searcj();
	void Add();
};


#endif