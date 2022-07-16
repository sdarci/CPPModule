#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weap):weapon(weap), name(name)
{
}

HumanA::~HumanA()
{
}

void	HumanA::attack()
{
	std::cout << this->name <<" attacks with their " << weapon.getType() << std::endl;
}