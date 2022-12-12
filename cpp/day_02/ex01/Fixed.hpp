/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   violence.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tapulask <tapulask@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 15:28:11 by tapulask          #+#    #+#             */
/*   Updated: 2022/12/01 15:28:12 by tapulask         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>
# include <string>
# include <cmath>

class Fixed
{
private:
  int              val;
  static const int fract;
public:
  Fixed();
  Fixed( const Fixed& );
  Fixed( const int );
  Fixed( const float );
  int getRawBits( void ) const;
  void setRawBits( int const raw );
  float toFloat( void ) const;
  int toInt( void ) const;
  Fixed& operator=( Fixed init );//anon var - how is it used? - it is only anon in the header :)
  ~Fixed();
};

std::ostream &operator<<( std::ostream &o, Fixed const &thing);
#endif
