#include <stdio.h>
/**
*/
int main(void)
{
  unsigned long int primero = 1;
  unsigned long int segundo = 2;
  unsigned long int numero;
  unsigned long int contador = 0;
  int num1 = 1;
  while (num1 <= 33)
    {
      if (primero < 4000000 && (primero % 2)  == 0)
	{
	  contador = contador + primero;
	}

      numero = primero + segundo;

      primero = segundo;

      segundo = numero;

      num1++;
    }
  printf("%ld\n", contador);
  return (0);
}
