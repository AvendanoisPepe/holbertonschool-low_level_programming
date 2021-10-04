#include "main.h"
/**
*/
void print_alphabet_x10(void)
{
  char caracter;
  int numero;

  for (numero = 0; numero < 11; numero++)
    {
      for (caracter = 'a'; caracter <= 'z'; caracter++)
	{
	  _putchar(caracter);
	}
      _putchar('\n');
    }
}
