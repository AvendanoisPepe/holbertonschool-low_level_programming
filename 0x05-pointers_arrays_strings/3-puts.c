#include "main.h"
/**
 *_puts-prints a text string in stdout.
 *@str:pointer of the string to be printed.
*/
void _puts(char *str)
{
	int variable = 0;

	while (str[variable] != '\0')
	{
		_putchar(str[variable]);
		variable++;
	}
	_putchar('\n');
}
