#include <iostream>

class testclass
{
private:
  static void debug( void );
  //a static member function has the same pointer signature as an ordinary function
  
  static void info( void );
  
  static void warning( void );
  
  static void error( void );
public:
  void complain( std::string level );
};
