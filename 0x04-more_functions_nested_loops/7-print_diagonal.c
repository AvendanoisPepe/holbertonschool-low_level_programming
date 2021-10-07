#include "main.h"
/**
 *print_diagonal-prints a diagonal line.
 *@n: character defining the number of printouts of /
*/
void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int contador1 = 0;
		int contador2 = 0;

		while (contador1 < n)
		{
			contador2 = 0;
			while (contador2 < n)
			{
				if (contador2 == contador1)
				{
					_putchar('\\');
				}
				else if (contador2 < contador1)
				{
					_putchar(' ');
				}
				contador2++;
			}
			_putchar('\n');
			contador1++;
		}
	}
}
