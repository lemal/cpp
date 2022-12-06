#include "main.hpp"

typedef void (tst::*mymemfuncptr)(void);
#define CALL_MEMBER_FN(object,ptrToMember) ((object).*(ptrToMember))



void tst::myfunc(void)
{
  std::cout << "Helloworld" << std::endl;
}

void tst::mysecondfunc(void)
{
  std::cout << "an outworldly helloworld" << std::endl;
}


void tst::getActionMyFunc(void)
{
  //myfunc();
  //mysecondfunc();
  mymemfuncptr ptr = &tst::myfunc;
  CALL_MEMBER_FN(*this, ptr)();//extract the full version from this?
  mysecondfunc();
}

int main(void)
{
  tst var;
  
  var.getActionMyFunc();
  return (0);
}
