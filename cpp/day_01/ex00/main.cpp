/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tapulask <tapulask@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 16:28:18 by tapulask          #+#    #+#             */
/*   Updated: 2022/11/28 16:35:05 by tapulask         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

Zombie *newZombie( std::string str );

int main(void)
{
  Zombie test;
  Zombie *kek;

  kek = newZombie("Jeff");
  kek->announce();
  test.randomChump("Bob");

  delete(kek);
  return (0);
}