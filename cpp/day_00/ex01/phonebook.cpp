/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tapulask <tapulask@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 10:51:22 by tapulask          #+#    #+#             */
/*   Updated: 2022/11/16 21:02:21 by tapulask         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "phonebook.hpp"
# include <vector>
//Your header has methods realization - 1
Contact::Contact(void)
{
	std::cout << "Constructor called" << std::endl;
	// std::cout << "Enter your first name: " << std::endl;
	// std::cin >> this->firstName;
	// std::cout << "Enter your last name: " << std::endl;
	// std::cin >> this->lastName;
	// std::cout << "Enter your nickname: " << std::endl;
	// std::cin >> this->nickName;
	// std::cout << "Enter your phone number: " << std::endl;
	// std::cin >> this->phoneNumber;
	// std::cout << "Enter your dark secret: " << std::endl;
	// std::cin >> this->darkSecret;
}
//constructor of a temporary object that is being pushed. Maers NRVO and RVO optimisations - objects transferred someplace (?)

bool Contact::SetFirstName(void)
{
    std::cout << "Enter your first name: " << std::endl;
    getline(std::cin, firstName);
    if (std::cin.eof()) {
        std::cout<<"Lox"<<std::endl;
        return true;
    }
    if (firstName.length() == 0) {
        std::cout<<"Incorrect input. Please try again."<<std::endl;
        
        return (false);
    }
    
    return (true);
}

// bool	Contact::SetLastName(void)
// {
//     std::cout << "Enter your last name: " << std::endl;
// 	std::cin >> this->lastName;
// }

// bool	Contact::SetNickName(void)
// {
//     std::cout << "Enter your nickname: " << std::endl;
// 	std::cin >> this->nickName;
// }
// bool	Contact::SetPhoneNumber(void)
// {
//     std::cout << "Enter your phone number: " << std::endl;
// 	std::cin >> this->phoneNumber;
// }

// bool    Contact::SetDarkSecret(void)
// {
//     std::cout << "Enter your dark secret: " << std::endl;
// 	std::cin >> this->darkSecret;
// }

void    Contact::SetUserData(void)
{
    while (!SetFirstName());
    
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
	// PhoneBook	var;
    Contact var;
	(void)	argv;
	if (argc != 1)
		return (0);
    var.SetUserData();
    // std::vector<Contact> kek(6);
    // kek.push_back(Contact());
	// var.SetContactDetails();//assume they are right for now
	// var.SetContactData();
	return (0);
}
//Command based state? - successfully instantiated a class as an object with many objects of another class