/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tapulask <tapulask@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 15:28:23 by tapulask          #+#    #+#             */
/*   Updated: 2022/12/01 16:20:13 by tapulask         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAIN_HPP
# define MAIN_HPP
# include <string>
# include <iostream>
# include <fstream>
bool inputValid(int argc, std::ifstream &myFile);
void ft_replace(std::ifstream &myFile, char **argv, std::ostream &outFile);
#endif
