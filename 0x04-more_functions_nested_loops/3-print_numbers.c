#include "main.h"
/**
 *print_numbers-prints from 0 to 9
*/
void print_numbers(void)
{
	int contador = 0;

	while (contador < 10)
	{
		_putchar(contador + '0');
		contador++;
	}
	_putchar('\n');
}
