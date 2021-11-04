#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_all - Imprime cualquier parametro que se le pase sin importar el
 * tipo de dato
 * @format:argumentos pasados para imprimir.
*/
void print_all(const char *const format, ...)
{
	int iterador = 0;
	char *cadena;
	char *espacio  = "";
	va_list cosa;

	va_start(cosa, format);

	if (format != NULL)
	{
		while (format[iterador])
		{
			switch (format[iterador])
			{
			case 'c':
				printf("%s%c", espacio, va_arg(cosa, int));
				break;
			case 'i':
				printf("%s%d", espacio, va_arg(cosa, int));
				break;
			case 'f':
				printf("%s%f", espacio, va_arg(cosa, double));
				break;
			case 's':
				cadena = va_arg(cosa, char*);
				if (cadena == NULL)
				{
					cadena = "(nil)";
				}
				printf("%s%s", espacio, cadena);
				break;

			default:
				iterador++;
				continue;
			}
			espacio = ", ";
			iterador++;
		}
	}
	printf("\n");
}
