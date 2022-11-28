/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   betterInput.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tapulask <tapulask@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 12:55:24 by tapulask          #+#    #+#             */
/*   Updated: 2022/11/17 13:22:35 by tapulask         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void)
{
    std::string str;

    // std::cin >> my_num >> two_num >> my_char;
    // std::cout << my_num << two_num << my_char;
    // std::cin >> str;
    // std::cout << str;
    std::getline(std::cin, str);
    std::cout << str << std::endl;
    
    return (0);
}