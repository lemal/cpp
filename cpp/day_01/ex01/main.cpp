/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tapulask <tapulask@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 16:37:50 by tapulask          #+#    #+#             */
/*   Updated: 2022/11/28 17:11:42 by tapulask         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#define ZNUM 4

Zombie* zombieHorde( int N, std::string name );

int main(void)
{
    Zombie *test;
    int     test_num;

    test_num = ZNUM;
    test = zombieHorde(test_num, "Bobbosaurus");
    while (test_num > 0)
    {
        test[test_num].announce();
        test_num--;
    }
    delete[] test;
    return (0);
}

