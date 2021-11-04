#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings -Imprimimos cadenas pasadas por parametros y separadas por
 * cierto caracter,
 * @separator: separa las cadenas entre si (hola, world)
 * @n:numero de argumentos osea cadenas.
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int iterador = 0;
	va_list cadenas;
	char *cad;

	va_start(cadenas, n);

	while (iterador < n)
	{
		cad = va_arg(cadenas, char*);

		if (cad != NULL)
		{
			printf("%s", cad);
		}
		else
		{
			printf("(nil)");
		}
		if (iterador < (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
		iterador++;
	}
	va_end(cadenas);
	printf("\n");
}
