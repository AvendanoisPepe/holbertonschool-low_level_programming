#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - Suma todos los parametros.
 * @n:Numero de argumentos.
 * Return:La suma de los parametros.
*/
int sum_them_all(const unsigned int n, ...)
{
	unsigned int iterador = 0;
	int guardar = 0;
	va_list creo;

	if (n == 0)
	{
		return (0);
	}

	va_start(creo, n);

	while (iterador < n)
	{
		guardar = guardar + va_arg(creo, int);
		iterador++;
	}
	va_end(creo);

	return (guardar);
}
