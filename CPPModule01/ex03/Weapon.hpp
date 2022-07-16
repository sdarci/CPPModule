#ifndef WEAPON_H
#define WEAPON_H
#include <iostream>
#include <string.h>

class Weapon
{
private:
	std::string type;
public:
	Weapon(std::string weap);
	~Weapon();
	const std::string &getType();
	void setType(std::string newClub);
};
#endif