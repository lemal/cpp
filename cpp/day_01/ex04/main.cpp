/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tapulask <tapulask@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 15:28:17 by tapulask          #+#    #+#             */
/*   Updated: 2022/12/01 16:22:04 by tapulask         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

int main(int argc, char **argv)
{
    std::string     fileName(argv[1]);
    std::string     namePostfix(".replace");
    std::ifstream   myFile(argv[1]);

    if (!inputValid(argc, myFile))
        return (0);
    std::ofstream outFile((fileName + namePostfix).c_str());
    ft_replace(myFile, argv, outFile);
    myFile.close();
    outFile.close();
    return (0);
}
