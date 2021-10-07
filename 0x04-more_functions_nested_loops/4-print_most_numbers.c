#include "main.h"
/**
 *print_most_numbers-prints numbers from 0 to 9 not including 2 and 4
*/
void print_most_numbers(void)
{
	int contador = 0;

	while (contador < 10)
	{
		if (contador != 4 && contador != 2)
		{
			_putchar(contador + '0');
		}
		contador++;
	}
	_putchar('\n');
}
