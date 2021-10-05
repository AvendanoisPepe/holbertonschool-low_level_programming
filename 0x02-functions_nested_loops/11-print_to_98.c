#include "main.h"
#include <stdio.h>
/**
*/
void print_to_98(int n)
{
  int num1 = n;
  int num2 = n;

  if (n <= 98)
    {
      while (num1 <= 98)
	{
	  if (num1 != 98)
	    {
	      printf("%d, ", num1);
	    }
	  else if (num1 == 98)
	    {
	      printf("%d,\n", num1);
	    }
	  num1++;
	}
    }
  else if (n >= 98)
    {
      while (num2 >= 98)
	{
	  if (num2 != 98)
	    {
	      printf("%d, ", num2);
	    }
	  else if (num2 == 98)
	    {
	      printf("%d,\n", num2);
	    }
	  num2--;
	}
    }
}
