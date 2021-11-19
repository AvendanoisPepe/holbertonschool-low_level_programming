#include "main.h"
/**
 * get_bit - Imprime el valor de un bit en un indice dado.
 * @n: Numero para imprimir.
 * @index: Posicion para encontrar el indice.
 * Return: Si fallo -1 si no el valor del indice.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > sizeof(n) * 8)
	{
		return (-1);
	}
	else
	{
		return ((n >> index) & 1);
	}
}
