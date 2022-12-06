/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tapulask <tapulask@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 15:30:14 by tapulask          #+#    #+#             */
/*   Updated: 2022/12/01 16:33:26 by tapulask         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

void ft_replace(std::ifstream &myFile, char **argv, std::ostream &outFile)
{
    std::string     str;
    std::size_t     loc;
    std::string     needle(argv[2]);

    while (true)
    {
      getline(myFile, str);
      loc = str.find(argv[2]);
      if (loc != std::string::npos)
      {
        str.erase(loc, needle.length());
        str.insert(loc, argv[3]);
      }
      if (myFile.eof())
        break;
      outFile << str << std::endl;
    }
}