#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <iostream>
# include <string>

class Zombie
{
private:
  std::string name;
public:
  Zombie();
  bool onHeap;
  void announce(void);
  Zombie *newZombie( std::string str );
  //Zombie( std::string str);
  void setZombie( std::string str);
  void randomChump(  std::string str );
  ~Zombie();
};
#endif
