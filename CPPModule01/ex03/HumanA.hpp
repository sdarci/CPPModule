#ifndef HUMANA_H
#define HUMANA_H
#include <iostream>
#include <string.h>
#include "Weapon.hpp"
class HumanA
{
private:
	Weapon &weapon;
	std::string name;
public:
	HumanA(std::string name, Weapon &weap);
	~HumanA();
	void	attack();
};




#endif