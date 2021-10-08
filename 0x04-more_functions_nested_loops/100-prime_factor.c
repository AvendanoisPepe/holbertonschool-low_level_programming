#include "main.h"
#include <stdio.h>
#include <math.h>
/**
 *main-Prints the largest prime factor of the variable number
 *Return:0 if there is no error
*/
int main(void)
{
	long int numero = 612852475143;
	long int numero1 = 3;
	long int numMay = -1;

	for (numero = 612852475143; numero % 2 == 0; numero /= 2)
	{
		numMay = 2;
	}

	while (numero1 <= sqrt(numero))
	{
		while (numero % numero1 == 0)
		{
			numero = numero / numero1;
			numMay = numero1;
		}

		numero1 = numero1 + 2;
	}

	if (numero > 2)
	{
		numMay = numero;
	}
	printf("%ld\n", numMay);

	return (0);
}
