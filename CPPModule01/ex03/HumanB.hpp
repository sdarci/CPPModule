#ifndef HUMANB_H
#define HUMANB_H
#include <iostream>
#include <string.h>
#include "Weapon.hpp"
class HumanB
{
private:
	Weapon *weapon;
	std::string name;
public:
	HumanB(std::string name);
	~HumanB();
	void	attack();
	void	setWeapon(Weapon &weap);
};


#endif