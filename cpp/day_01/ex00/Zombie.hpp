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
  void announce(void);
  Zombie *newZombie( std::string str );
  void setZombie( std::string str);
  void randomChump(  std::string str );
  ~Zombie();
};
#endif
