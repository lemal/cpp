#include "Harl.hpp"

void testclass::debug( void )
{
  std::cout <<  "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void testclass::info( void )
{
  std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void testclass::warning( void )
{
  std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month."<< std::endl;
}

void testclass::error( void )
{
  std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}
  
void testclass::complain( std::string level )
{
  void (*funcptr[127])(void);
  
  funcptr[(int)'D'] = &testclass::debug;
  funcptr[(int)'I'] = &testclass::info;
  funcptr[(int)'W'] = &testclass::warning;
  funcptr[(int)'E'] = &testclass::error;
  funcptr[(int)level[0]]();
}
