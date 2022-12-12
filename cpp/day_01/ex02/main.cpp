/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tapulask <tapulask@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 15:28:00 by tapulask          #+#    #+#             */
/*   Updated: 2022/12/01 15:28:01 by tapulask         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int main(void)
{
    std::string str("HI THIS IS BRAIN");
    std::string *strPtr;
    std::string &strRef = str;

    strPtr = &str;
    std::cout << "str address is: " << &str
        << std::endl << "The pointer points to: " << strPtr 
        << std::endl << "The reference points to: " << &strRef << std::endl;
    
    std::cout << std::endl;
    
    std::cout << "str value is: " << str
        << std::endl << "The value that the pointer points to is: " << *strPtr
        << std::endl << "The value that the reference points to is: " << strRef << std::endl;
    return (0);
}

