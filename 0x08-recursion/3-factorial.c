#include "main.h"
/**
 * factorial- retorna el factorial de un numero.
 * @n: numero factorial,
 * Return: retorna el factorial de n
*/
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
