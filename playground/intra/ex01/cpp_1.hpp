/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cpp_1.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tapulask <tapulask@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 10:40:41 by tapulask          #+#    #+#             */
/*   Updated: 2022/11/16 12:34:18 by tapulask         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CPP_1_HPP
# define CPP_1_HPP
# include <iostream>
class Sample
{
private:
	int	kek;
	std::string kek21;
public:
	Sample(void);
	Sample(int	kek_init);
	void SetSample(std::string kek21_init);
	void SetSample(int	kek_set);
	void GetSampleKek(void);
	void GetSampleStr(void);
	void GetStrLength(void);
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
