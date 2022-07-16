#include "Zombie.hpp"

void	randomChump( std::string name ) {
	Zombie	announcer = Zombie(name);
	announcer.announce();
}