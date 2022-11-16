/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cpp_1.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tapulask <tapulask@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 18:38:40 by tapulask          #+#    #+#             */
/*   Updated: 2022/11/16 18:58:09 by tapulask         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cpp_1.hpp"

Sample::Sample(void)
{
    std::cout << "Sample constructor called" << std::endl;
}

Sample::~Sample(void)
{
    std::cout << "Sample destructor called" << std::endl;
}

void    Sample::SetStr(std::string str)
{
    this->kek21 = str;
}

Sample2::Sample2()
{
    std::cout << "Sample2 constructor called" << std::endl;
}

Sample2::~Sample2()
{
    std::cout << "Sample2 constructor called" << std::endl;
}

int main(void)
{
    Sample  var;
    // Sample2  var2;
    // how is user input organised?
    return (0);
}