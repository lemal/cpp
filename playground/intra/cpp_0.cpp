/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cpp_0.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tapulask <tapulask@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 21:13:00 by tapulask          #+#    #+#             */
/*   Updated: 2022/11/14 22:05:22 by tapulask         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cpp_0.hpp"

int main(void)
{
	std::string	str;
	int			i;

	i = 0;
	std::cin >> str;
	while (str[i])
	{
		std::cout << (char)toupper(str[i]);
		i++;
	}
	std::cout << '\n';
	return (0);
}