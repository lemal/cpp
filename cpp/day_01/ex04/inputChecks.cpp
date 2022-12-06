/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inputChecks.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tapulask <tapulask@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 15:28:53 by tapulask          #+#    #+#             */
/*   Updated: 2022/12/01 16:04:55 by tapulask         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

bool inputValid(int argc, std::ifstream &myFile)
{
    if (argc == 4 && myFile.fail())
    {
      std::cout << "No such file!" << std::endl;
      return (false);
    }  
    else if (argc != 4)
    {
      myFile.close();
      return (false);
    }
    return (true);
}