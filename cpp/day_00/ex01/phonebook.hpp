/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tapulask <tapulask@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 10:51:24 by tapulask          #+#    #+#             */
/*   Updated: 2022/11/17 14:48:51 by tapulask         ###   ########.fr       */
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
    // void	SetContactData(void);
    bool    SetGivenVal(std::string str, std::string *givenVal);
	bool	SetFirstName(void);//stay in one function while input is equal to zero.
	bool	SetLastName(void);
	bool	SetNickName(void);
	bool	SetPhoneNumber(void);
	bool	SetDarkSecret(void);
    void    SetUserData(void);
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