/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   violence.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tapulask <tapulask@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 15:28:07 by tapulask          #+#    #+#             */
/*   Updated: 2022/12/01 15:28:08 by tapulask         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::fract=8;

int main( void )
{
  Fixed a;
  Fixed const b( 10 );
  Fixed const c( 42.42f );
  Fixed const d( b );

  a = Fixed( 1234.4321f );//what is this?
  std::cout << "a is "  << a << std::endl;
  std::cout << "b is " << b << std::endl;
  std::cout << "c is " << c << std::endl;
  std::cout << "d is " << d << std::endl;

  std::cout << "a is " << a.toInt() << " as integer " << std::endl;
  std::cout << "b is " << b.toInt() << " as integer " << std::endl;
  std::cout << "c is " << c.toInt() << " as integer " << std::endl;

  return (0);
}
