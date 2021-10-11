#include "main.h"
/**
 *puts2-prints the characters 2 by 2
 *@str:chain to print.
*/
void puts2(char *str)
{
	int variable;

	int contador = 0;

	for (variable = 0; str[variable] != '\0'; variable++)
	{
	}

	while (contador < variable)
	{
		_putchar(str[contador]);
		contador += 2;
	}
	_putchar('\n');
}
