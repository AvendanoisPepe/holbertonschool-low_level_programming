#include "main.h"
/**
 *  set_bit - Establece un bit en un indice dado de valor 1.
 * @n:Numero para imprimir.
 * @index: Posicion para encontrar el bit.
 * Return:Si fallo -1 si no 1.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(n) * 8)
	{
		return (-1);
	}
	*n = *n | (1 << index);
	return (1);
}
