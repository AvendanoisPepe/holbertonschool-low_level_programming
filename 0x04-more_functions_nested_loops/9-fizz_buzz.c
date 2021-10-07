#include "main.h"
#include <stdio.h>
/**
 *main-prints the numbers from 1 to 100 by replacing multiples of 3 with Fizz,
 *multiples of 5 with Buzz and multiples sharing with FizzBuzz.
 *Return: 0 if there is no error
*/
int main(void)
{
	int contador = 1;

	while (contador <= 100)
	{
		if (contador % 3 == 0 && contador % 5 != 0)
		{
			printf(" Fizz");
		}
		else if (contador % 3 != 0 && contador % 5 == 0)
		{
			printf(" Buzz");
		}
		else if (contador % 3 == 0 && contador % 5 == 0)
		{
			printf(" FizzBuzz");
		}
		else if (contador == 1)
		{
			printf("%d", contador);
		}
		else
		{
			printf(" %d", contador);
		}
		contador++;
	}
	printf("\n");
	return (0);
}
