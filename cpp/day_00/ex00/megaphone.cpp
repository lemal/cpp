/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tapulask <tapulask@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 16:54:55 by tapulask          #+#    #+#             */
/*   Updated: 2022/11/15 10:46:30 by tapulask         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "megaphone.hpp"

int	main(int argc, char **argv)
{	
	int			i, j;
	std::string	str = "* LOUD AND UNBEARABLE FEEDBACK NOISE *";

	if (argc == 1)
	{
		std::cout << str << '\n';
		return (0);
	}
	i = 1;
	j = 0;
	while (argv[i])
	{
		j = 0;
		while (argv[i][j])
		{
			std::cout << (char)toupper(argv[i][j]);
			j++;
		}
		i++;
	}
	std::cout << '\n';
	return (0);
}
