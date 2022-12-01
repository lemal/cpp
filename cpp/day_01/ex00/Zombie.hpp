/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tapulask <tapulask@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 15:27:34 by tapulask          #+#    #+#             */
/*   Updated: 2022/12/01 15:27:38 by tapulask         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
