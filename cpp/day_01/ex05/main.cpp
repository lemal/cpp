#include "Harl.hpp"

int main(void)
{
  testclass test;

  test.complain("DEBUG");
  test.complain("INFO");
  test.complain("WARNING");
  test.complain("ERROR");
  return (0);
}
