/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tapulask <tapulask@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 10:51:22 by tapulask          #+#    #+#             */
/*   Updated: 2022/11/16 12:48:10 by tapulask         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "phonebook.hpp"

//Your header has methods realization - 1
Contact::Contact(void)
{
	std::cout << "Constructor called" << std::endl;
	std::cout << "Enter your first name: " << std::endl;
	std::cin >> this->firstName;
	std::cout << "Enter your last name: " << std::endl;
	std::cin >> this->lastName;
	std::cout << "Enter your nickname: " << std::endl;
	std::cin >> this->nickName;
	std::cout << "Enter your phone number: " << std::endl;
	std::cin >> this->phoneNumber;
	std::cout << "Enter your dark secret: " << std::endl;
	std::cin >> this->darkSecret;
}

Contact::~Contact(void)
{
	std::cout << "Destructor called" << std::endl;
}

PhoneBook::PhoneBook()
{
}

PhoneBook::~PhoneBook()
{
}

int	main(int argc, char **argv)
{
	PhoneBook	var;
	(void)	argv;
	if (argc != 1)
		return (0);
	// var.SetContactDetails();//assume they are right for now
	// var.SetContactData();
	return (0);
}
//Command based state? - successfully instantiated a class as an object with many objects of another class