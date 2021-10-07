#include "main.h"
/**
 *print_line-prints a straight line.
 *@n:variable that defines how many times _ is printed
*/
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int contador = 1;
		while (contador <= n)
		{
			_putchar('_');
			contador++;
		}
		_putchar('\n');
	}
}
