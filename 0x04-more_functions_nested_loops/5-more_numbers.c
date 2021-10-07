#include "main.h"
/**
 *more_numbers-prints the numbers from 0 to 14 (10 times)
*/
void more_numbers(void)
{
	int contador1 = 0;
	int contador2 = 0;

	while (contador1 < 10)
	{
		contador2 = 0;
		while (contador2 < 15)
		{
			if (contador2 >= 10)
			{
				_putchar(contador2 / 10 + '0');
			}
			_putchar(contador2 % 10 + '0');
			contador2++;
		}
		contador1++;
		_putchar('\n');
	}
}
