/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tapulask <tapulask@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 10:51:24 by tapulask          #+#    #+#             */
/*   Updated: 2022/11/16 12:37:28 by tapulask         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include <iostream>
# include <string>
# include <stdbool.h>

class Contact
{
private:
	std::string	firstName;
	std::string	lastName;
	std::string	nickName;
	std::string	phoneNumber;//will need a tostr from int//will not, str by default
	std::string	darkSecret;
public:
	Contact(void);
	// void			SetContactDetails(void);//call and check len in main. need individual functions
	// bool			SetFirstName(void);//stay in one function while input is equal to zero.
	// void			SetLastName(void);
	// void			SetNickName(void);
	// void			SetPhoneNumber(void);
	// void			SetDarkSecret(void);
	void	SetContactData(void);
	~Contact(void);
};

class PhoneBook
{
private:
	Contact	contactData[8];
public:
	PhoneBook();
	~PhoneBook();
};

#endif