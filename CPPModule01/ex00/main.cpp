#include "Zombie.hpp"

int main()
{
	Zombie First = Zombie("Zombiks1");
	Zombie *Second = newZombie("Zombiks2");
	First.announce();
	Second->announce();
	randomChump("Zombiks3");
	delete Second;
	return (0);
}