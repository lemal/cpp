/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tapulask <tapulask@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 16:30:09 by tapulask          #+#    #+#             */
/*   Updated: 2022/11/28 16:32:35 by tapulask         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *newZombie( std::string str )
{
  //heap memory
  Zombie *temp;

  temp = new Zombie;//deletions v
  temp->setZombie(str);
  return (temp);
}