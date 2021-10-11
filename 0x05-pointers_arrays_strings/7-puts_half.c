#include "main.h"
/**
 *puts_half-prints half of the text string.
 *@str:chain
*/
void puts_half(char *str)
{
	int variable;

	int condi;

	int condicompleta;

	for (variable = 0; str[variable] != '\0'; variable++)
	{
	}

	if (variable % 2 == 0)
	{
		condi = variable / 2;

		while (str[condi] != '\0')
		{
			_putchar(str[condi]);
			condi++;
		}
	}
	else if (variable % 2)
	{
		condicompleta = (variable - 1) / 2;

		while (condicompleta < variable - 1)
		{
			_putchar(str[condicompleta + 1]);
			condicompleta++;
		}
	}
	_putchar('\n');
}
