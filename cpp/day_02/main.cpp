/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   violence.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tapulask <tapulask@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 15:28:07 by tapulask          #+#    #+#             */
/*   Updated: 2022/12/01 15:28:08 by tapulask         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

/*std::string const &Weapon::getType(void)
{
  std::string const &typeRef = type;

  return (typeRef);
}

void Weapon::setType( std::string str )
{
  type = str;
}

Weapon::Weapon()
{
}

Weapon::Weapon( std::string str )
{
  setType(str);
}

Weapon::~Weapon()
{}


void HumanA::attack(void)
{
  std::cout << name << " attacks with their " << wpn.getType() << std::endl;
}

HumanA::HumanA(std::string nameInit, Weapon &wInit): name(nameInit), wpn(wInit)
{
  //wInit on stack? 
  //(void) wInit;
  //name = nameInit;
  //wpn = wInit;
  //wpn.setType(wInit.getType());
  //std::cout << wInit.getType() << "hmh" << std::endl;
  //what does this give?
}//how do I realize picking up weapon in a's constructor? 

HumanA::~HumanA()
{
}

void HumanB::attack(void)
{
  std::cout << name << " attacks with their " << wpn->getType() << std::endl;
}

HumanB::HumanB(std::string nameInit): name(nameInit)
{
}

HumanB::~HumanB()
{
}

void HumanB::setWeapon(Weapon &wpnInit)
{
  //idea: store the pointer in B upon initialization
  wpn = &wpnInit;
  //it is not a constructor, so cannot be base initialized
  //now the issue is that the B 'subtype' of the A type
  //should reflect all and every change made to B
  }*/
/*int main(void)
{
{
  Weapon club = Weapon("crude spiked club");
  //can only do what they ask with dybamic memory

  //Weapom class tests
  //club.setType("kek");
  //std::cout << club.getType() << std::endl;

  //Human class tests
  //HumanA kek("kek", club);


  HumanA bob("Bob", club);//"crude spiked club");//club);
  //I am not sending a club address. if that were thw case, it would be a piece of cake. the task is to implement a change in a value of one instance due to a change in another instance. is that possible?? Well, I know ppl who did it, so yes, it is.
  //the question becomes this: given that you are passing about a variable by value, how can you change it at the source and have the change be reflected for a class your class is an instance of?
  bob.attack();
  club.setType("some other type of club");
  //std::cout << " value referenced " << club.getType() << std::endl;
  //std::cout << club.getType() << std::endl;
  bob.attack();
 }
 {
 std::cout << std::endl;
  Weapon club = Weapon("crude spiked club");
  
  HumanB jim("Jim");
  
  jim.setWeapon(club);
  jim.attack();
  club.setType("some other type of club");
  //std::cout << club.getType() << std::endl;
  jim.attack();
  }*/
//how do I make the changes reflect through to the superset variable?

//so references are used to make variables interlinked - have changes in one subvariable be reflected in the other when passing it by value.


const int Fixed::fract=8;

int main(void)
{
  Fixed a;
  
  Fixed b( a );
  
  Fixed c;
  
  c = b;
  
  std::cout << a.getRawBits() << std::endl;
  
  std::cout << b.getRawBits() << std::endl;
  
  std::cout << c.getRawBits() << std::endl;
  
  return 0;
}
