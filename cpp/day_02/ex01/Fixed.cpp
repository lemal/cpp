#include "Fixed.hpp"

Fixed::Fixed(): val(0)
{
  std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( const Fixed &init )
{
  std::cout << "Copy constructor called" << std::endl;
  val = init.getRawBits();
  //return (init);
}

Fixed& Fixed::operator=( Fixed init )
{
  //Fixed temp;

  std::cout << "Copy assignment operator called" << std::endl;
  this->setRawBits(init.getRawBits());
  //return (temp);
  return (*this);
}//anon var - how is it used? - it is only anon in the header :)

std::ostream &operator<<( std::ostream &o, Fixed const &thing)
{
  o << thing.getRawBits();
  return (o);
}

int Fixed::getRawBits( void ) const
{
  //whats the mechanism?
  //std::cout << "getRawBits member function called" << std::endl;
  return (val);
}

void Fixed::setRawBits( int const raw )
{// aaaaah
  val = raw;
}

Fixed::Fixed( const int intVal)
{
  //Fixed temp;
  
  //temp.
    std::cout << "Int constructor called" << std::endl;
    setRawBits(intVal);//is this sufficient to reassign variables?
  //return (temp);
}

Fixed::Fixed( const float floatVal)
{
  //Fixed temp;

  //temp.
  //std::cout << "Float constructor called "<< floatVal << std::endl;
    setRawBits(roundf(floatVal));
    // setRawBits(floatVal);
    // return (temp);
}

float Fixed::toFloat( void ) const
{
  return ((float)val);
}

int Fixed::toInt( void ) const
{
  return ((int)val);
}

Fixed::~Fixed()
{
  std::cout << "Destructor called" << std::endl;
}
