/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   violence.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tapulask <tapulask@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 15:28:11 by tapulask          #+#    #+#             */
/*   Updated: 2022/12/01 15:28:12 by tapulask         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>
# include <string>
/*
class Weapon
{
private:
  std::string type;
public:
  Weapon();
  Weapon( std::string str );
  std::string const &getType();
  void setType( std::string str );
  ~Weapon();
};

class HumanA
{
private:
  std::string name;
  Weapon &wpn;
public:
  HumanA();
  void attack(void);
  HumanA(std::string nameInit, Weapon &wInit);
  //HumanA(std::string nameInit, Weapon wpnInit);
  ~HumanA();
};

class HumanB
{
private:
  std::string name;
  Weapon *wpn;
public:
  HumanB();
  HumanB( std::string str );
  void attack(void);
  //void setWeapon(Weapon wpnInit);
  void setWeapon(Weapon &wpnInit);
  ~HumanB();
  };*/
class Fixed
{
private:
  int              val;
  static const int fract;
public:
  Fixed();
  Fixed(Fixed &init);
  Fixed& operator=(Fixed &init);//anon var - how is it used? - it is only anon in the header :)
  int getRawBits( void ) const;
  void setRawBits( int const raw );
  ~Fixed();
};

#endif
