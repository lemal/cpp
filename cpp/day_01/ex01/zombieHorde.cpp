/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tapulask <tapulask@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 16:46:25 by tapulask          #+#    #+#             */
/*   Updated: 2022/11/28 17:06:28 by tapulask         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    Zombie *myHorde = new Zombie[N];

    while (N > 0)
    {
        myHorde[N].setZombie(name);
        N--;
    }
    return (myHorde);
}