#include "main.h"
/**
 *print_square-print a square
 *@size: square size
*/
void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int contador1 = 0;
		int contador2 = 0;

		while (contador1 < size)
		{
			contador2 = 0;
			while (contador2 < size)
			{
				_putchar('#');
				contador2++;
			}
			_putchar('\n');
			contador1++;
		}
	}
}
