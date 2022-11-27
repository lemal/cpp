#include "Zombie.hpp"

Zombie::Zombie()
{
   onHeap = false;
}

void Zombie::announce( void )
{
  std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setZombie( std::string str)
{
  name = str;
}
//void Zombie::setZombie( std::string str)
//{
// name = str;
// announce();
//}

Zombie *newZombie( std::string str )
{
  //heap memory
  Zombie *temp;

  temp = new Zombie;//deletions?
  temp->onHeap = true;
  temp->setZombie(str);
  temp->announce();
  return (temp);
}

void Zombie::randomChump(  std::string str )
{
  //stack memory?
  Zombie temp;

  temp.setZombie(str);
  temp.announce();
  //Zombie::Zombie(str);
}


Zombie::~Zombie()
{
  if (onHeap)
    delete (this);
}

//int main(void)
//{
// Zombie test;
//Zombie *kek;
//
// kek = newZombie("Jeff");
//  kek->announce();
//  test.randomChump("Bob");
// return (0);
//}
//figure out destructors

int main(void)
{
 // Zombie test;
//  Zombie *kek;

//  kek = newZombie("Jeff");
//  kek->announce();
//  test.randomChump("Bob");
  Zombie test[4];

  test[0].randomChump("Bob");
  test[1].randomChump("Bobby");
  test[2].randomChump("Bobbozaur");
  test[3].randomChump("Bobber");
  return (0);
}

