#include "main.h"
/**
 * fallara- contando la cantidad de divisores que tiene n
 * @iterador: iterador.
 * @div: numero a evaluar.
 * Return: returna la cantidad de divisiones de iterador.
*/
int fallara(int iterador, int div)
{
	if (iterador % div == 0 && iterador > div)
	{
		return (1 + fallara(iterador, div + 1));
	}
	if (iterador % div == 0 && iterador == div)
	{
		return (1);
	}
	return (fallara(iterador, div + 1));
}
/**
 * is_prime_number-decide si un numero es primo o no.
 * @n:numero a evaluar.
 * Return:1 si es primo, 0 si no
*/
int is_prime_number(int n)
{
	if (n < 0)
	{
		return (0);
	}
	if (fallara(n, 1) == 2)
	{
		return (1);
	}
	return (0);
}
