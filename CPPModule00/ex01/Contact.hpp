#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <string>
#include <iomanip>

class Contact
{
private:
		static std::string	names[5];
		std::string			filed[5];
		int					index;
public:
	bool add(int index);
	void	print();
	bool cmp();
	void	PrintIndex();
	~Contact();
};

#endif