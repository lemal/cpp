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
  o << thing.toFloat();
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
  // setRawBits(roundf(floatVal));
  unsigned int temp;

  temp = roundf(floatVal * (1 << Fixed::fract));
  setRawBits(temp);
    // setRawBits(floatVal);
    // return (temp);
}

float Fixed::toFloat( void ) const
{
  float temp;

  temp = ((float)this->val / (float)(1 << Fixed::fract));
  return (temp);
}

int Fixed::toInt( void ) const
{
  return (this->val >> Fixed::fract);
}

Fixed::~Fixed()
{
  std::cout << "Destructor called" << std::endl;
}
//aand it works. So The algo for changing fixed point into float and otherwise is still unknown. But it at least works :)
