#include "Zombie.hpp"

void Zombie::announce( void )
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie(void)
{
		std::cout << "NO NAME ZOMBIE" << " is born o.o" << std::endl;
}

Zombie::~Zombie()
{
	std::cout << this->name << " died x.x" << std::endl;
}

void Zombie::setName(std::string name)
{
	this->name = name;
}
