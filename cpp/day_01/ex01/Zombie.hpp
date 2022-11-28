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
  void setZombie( std::string str);
  ~Zombie();
};
#endif
