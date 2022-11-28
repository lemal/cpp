/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tapulask <tapulask@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 10:51:22 by tapulask          #+#    #+#             */
/*   Updated: 2022/11/17 15:56:37 by tapulask         ###   ########.fr       */
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

bool Contact::SetGivenVal(std::string str, std::string *givenVal)
{
    std::cout << str << std::endl;
    getline(std::cin, *givenVal);
    if (std::cin.eof())
        return (true);
    if (firstName.length() == 0){
        std::cout << "A field cannot be empty! Please try again."<<std::endl;
        return (false);
    }
    return (true);
}

bool	Contact::SetFirstName(void)
{
    return (SetGivenVal("Enter your first name: ", &firstName));
}

bool	Contact::SetLastName(void)
{
    return (SetGivenVal("Enter your last name: ", &lastName));
}

bool	Contact::SetNickName(void)
{
    return (SetGivenVal("Enter your nickname: ", &nickName));
}

bool	Contact::SetPhoneNumber(void)
{
    return (SetGivenVal("Enter your phone number: ", &phoneNumber));
}

bool    Contact::SetDarkSecret(void)
{
    return (SetGivenVal("Enter your dark secret: ", &darkSecret));
}

void    Contact::SetUserData(void)
{
    while (!SetFirstName());
    while (!SetLastName());
    while (!SetNickName());
    while (!SetPhoneNumber());
    while (!SetDarkSecret());
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


// bool Contact::SetFirstName(void)
// {
//     // std::string temp;

//     std::cout << "Enter your first name: " << std::endl;
//     getline(std::cin, firstName);
//     // if (!(std::cin >> temp))
//     //     return (true);
//     if (std::cin.eof()){
//         // std::cout<<"Lox"<<std::endl;
//         return (true);
//     }
//     if (firstName.length() == 0){
//         std::cout<<"A field cannot be empty! Please try again."<<std::endl;
//         return (false);
//     }
//     return (true);
// }

//Command based state? - successfully instantiated a class as an object with many objects of another class