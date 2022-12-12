#include "Fixed.hpp"

Fixed::Fixed(): val(0)
{
  std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed &init)
{
  std::cout << "Copy constructor called" << std::endl;
  val = init.getRawBits();
  //return (init);
}

Fixed& Fixed::operator=(Fixed &init)
{
  //Fixed temp;

  std::cout << "Copy assignment operator called" << std::endl;
  this->setRawBits(init.getRawBits());
  //return (temp);
  return (*this);
}//anon var - how is it used? - it is only anon in the header :)

int Fixed::getRawBits( void ) const
{
  //whats the mechanism?
  std::cout << "getRawBits member function called" << std::endl;
  return (val);
}

void Fixed::setRawBits( int const raw )
{// aaaaah
  val = raw;
}

Fixed::~Fixed()
{
  std::cout << "Destructor called" << std::endl;
}
