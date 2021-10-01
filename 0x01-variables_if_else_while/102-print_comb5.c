#include <stdio.h>
/**
*main-prints the combinations of two two-digit numbers
*Return:0 if there is no error
*/
int main(void)
{
  int primero = 0;
  int segundo = 0;
  while (primero < 100)
    {
      while (segundo < 100)
	{
	  if (primero < segundo)
	    {
	      putchar((primero / 10) + 48);
	      putchar((primero % 10) + 48);
	      putchar(' ');
	      putchar((segundo / 10) + 48);
	      putchar((segundo % 10) + 48);
	      if (primero != 98 || segundo != 99)
		{
		  putchar(',');
		  putchar(' ');
		}
	    }
	  segundo++;
	}
      primero++;
    }
  putchar('\n');
  return (0);
}
