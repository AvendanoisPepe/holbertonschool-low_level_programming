#include "main.h"
/**
 *print_rev-prints the string upside down
 *@s:chain.
*/
void print_rev(char *s)
{
	int variable;

	int cadena;

	int variable2;

	for (variable = 0; s[variable] != '\0'; variable++)
	{
	}

	cadena = variable;

	 variable2 = cadena - 1;

	while (variable2 >= 0)
	{
		_putchar(s[variable2]);
		variable2--;
	}
	_putchar('\n');
}
