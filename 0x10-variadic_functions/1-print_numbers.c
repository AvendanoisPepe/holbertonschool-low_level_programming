#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - Imprime todos los numeros que se pasan por parametros,
 * @separator:Caractaer que separa los numeros a imprimir (1 , 2).
 * @n:Cantidad de parametros que se le pasan a la funcion.
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int iterador = 0;
	va_list numeros;

	va_start(numeros, n);

	while (iterador < n)
	{
		printf("%d", va_arg(numeros, int));
		if (iterador < (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}

		iterador++;
	}
	va_end(numeros);
	printf("\n");
}
