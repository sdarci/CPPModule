#include "Weapon.hpp"

Weapon::Weapon(std::string weap):type(weap)
{
}

Weapon::~Weapon()
{
}

const std::string &Weapon::getType()
{
	std::string &ref = this->type;
	return(ref);
}
void Weapon::setType(std::string newClub)
{
	this->type = newClub;
}