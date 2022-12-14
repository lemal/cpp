/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tapulask <tapulask@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 10:51:22 by tapulask          #+#    #+#             */
/*   Updated: 2022/11/28 16:01:13 by tapulask         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "phonebook.hpp"
//Your header has methods realization - 0
Contact::Contact(void)
{
	//std::cout << "Constructor called" << std::endl;
}

bool Contact::SetVal(std::string str, std::string *val)
{
    std::cout << str << std::endl;
    getline(std::cin, *val);
    if (std::cin.eof()) {
        return true;
    }
    if (val->length() == 0) {
      std::cout << "Field cannot be empty. Please try again." << std::endl;
        return (false);
    }
    return (true);
}

bool	Contact::SetFirstName(void)
{
  return (SetVal("Enter your first name: ", &firstName));
}

bool	Contact::SetLastName(void)
{
  return (SetVal("Enter your last name: ", &lastName));
}

bool	Contact::SetNickName(void)
{
  return (SetVal("Enter your nickname: ", &nickName));
}

bool	Contact::SetPhoneNumber(void)
{
  return (SetVal("Enter your phone number: ", &phoneNumber));
}

bool	Contact::SetDarkSecret(void)
{
  return (SetVal("Enter your dark secret: ", &darkSecret));
}

void    Contact::GetFirstName(void)
{
  if (firstName.length() > 10)
  {
    firstName[9] = '.';
    firstName.resize(10);
  }
  std::cout << std::setw(10) << std::setfill(' ')<< firstName << "|";
}

void    Contact::GetLastName(void)
{
  if (lastName.length() > 10)
  {
    lastName[9] = '.';
    lastName.resize(10);
  }
  std::cout << std::setw(10) << std::setfill(' ') << lastName << "|";
}

void    Contact::GetNickName(void)
{
  if (nickName.length() > 10)
  {
    nickName[9] = '.';
    nickName.resize(10);
  }
  std::cout << std::setw(10) << std::setfill(' ') << nickName << "|" << std::endl;
}

void    Contact::SetUserData(void)
{
    while (!SetFirstName());
    while (!SetLastName());
    while (!SetNickName());
    while (!SetPhoneNumber());
    while (!SetDarkSecret());
}

void PhoneBook::SetContact(void)
{
  if (index == 8)
    index = 0;
  contactData[index].SetUserData();
  contactFilled[index] = true;
  index++;
}

void PhoneBook::IndexIntoPhonebook(std::string &str)
{
  std::cout << "Enter an index from 1 up to and including 8" << std::endl;
  getline(std::cin, str);
  while (str.length() != 1 || !(str[0] > '0' && str[0] < '9'))
  {
    if (str[0] == 'E' && str[1] == 'X' && str[2] == 'I' && str[3] == 'T')
        return ;
    std::cout << "Number out of range. Try 1-8" << std::endl; 
    getline(std::cin, str);
  }
  if (!contactFilled[str[0] - '0' - 1])
  {
    std::cout << "The contact you indexed was not added." << std::endl; 
    return ;
  }

  std::cout << std::setw(10) << std::setfill(' ') << str[0] << "|";
  contactData[str[0] - '0' - 1].GetFirstName();
  contactData[str[0] - '0' - 1].GetLastName();
  contactData[str[0] - '0' - 1].GetNickName();
}

Contact::~Contact(void)
{
	//std::cout << "Destructor called" << std::endl;
}

PhoneBook::PhoneBook(void)
{
  int i;

  i = 0;
  index = 0;
  while (i < 8)
  {
    contactFilled[i] = false;
    i++;
  }
}

PhoneBook::~PhoneBook(void)
{
}


int	main(int argc, char **argv)
{
	PhoneBook	var;
	std::string str;
  
	(void)	argv;
	if (argc != 1)
		return (0);
	while (true)
	{
	    getline(std::cin, str);
	    if (str[0] == 'A' && str[1] == 'D' && str[2] == 'D')
	        var.SetContact();
	    else if (str[0] == 'S' && str[1] == 'E' && str[2] == 'A' && str[3] == 'R' && str[4] == 'C' && str[5] == 'H')
	     var.IndexIntoPhonebook(str);
	    else if (std::cin.eof())
	        break;
	    else
	        std::cout << "Usage - ADD, SEARCH or EXIT" << std::endl;
        if (str[0] == 'E' && str[1] == 'X' && str[2] == 'I' && str[3] == 'T')
	        break ;
	}
	return (0);
}
//Command based state? - successfully instantiated a class as an object with many objects of another class


//constructor of a temporary object that is being pushed. Maers NRVO and RVO optimisations - objects transferred someplace (?)

//what if you were stuck on an island with a modern language and knowledge of only C?
//code up in c, and search for alt later.

	//var.SetContact();
	//nice! now make it do what exactly?
	//var.SetUserData();
    // std::vector<Contact> kek(6);
    // kek.push_back(Contact());
	// var.SetContactDetails();//assume they are right for now
	// var.SetContactData();