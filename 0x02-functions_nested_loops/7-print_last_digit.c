#include "main.h"
/**
*/
int print_last_digit(int variable1)
{
  int variable2;
  if (variable1 < 0)
    {
      variable1 = -variable1;
    }
  variable2 = variable1 % 10;
  
  if (variable2 < 0)
    {
      variable2 = -variable2;
    }
  _putchar(variable2 + '0');
  return (variable2);
}
