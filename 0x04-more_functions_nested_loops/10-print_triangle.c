#include "main.h"
/**
 *print_triangle-prints a triangle
 *@size:is the size of the triangle.
*/
void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int contador1 = 1;
	       	int contador2 = contador1;

		while (contador1 <= size)
		{
			while (contador2 < size)
			{
				_putchar(' ');
				contador2++;
			}

			contador2 = 1;
			while (contador2 <= contador1)
			{
				_putchar('#');
				contador2++;
			}

			contador1++;

			_putchar('\n');
		}
	}
}
