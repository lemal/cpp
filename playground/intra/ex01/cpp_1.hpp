/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cpp_1.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tapulask <tapulask@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 10:40:41 by tapulask          #+#    #+#             */
/*   Updated: 2022/11/16 18:47:04 by tapulask         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CPP_1_HPP
# define CPP_1_HPP
# include <iostream>
class Sample
{
private:
	std::string kek21;
public:
	Sample(void);
    void    SetStr(std::string str);
	~Sample(void);
};

class Sample2
{
	private:
		Sample arr[8];
	public:
		Sample2();
		~Sample2();
};
#endif
