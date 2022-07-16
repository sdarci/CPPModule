#include "Zombie.hpp"

int main()
{
	Zombie *Horde = zombieHorde(5, "Pudge");
	for (int i = 0; i < 5; i++)
		Horde[i].announce();
	delete [] Horde;
	return (0);
}