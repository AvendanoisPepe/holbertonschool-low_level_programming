#include "main.h"
/**
 * _print_rev_recursion- Imprime una cadena al reves
 * @s: la cadena que se voltea.
*/
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
