#include "Zombie.hpp"

Zombie::Zombie()
{
}

void Zombie::announce( void )
{
  std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setZombie( std::string str)
{
  name = str;
}

Zombie::~Zombie()
{}
