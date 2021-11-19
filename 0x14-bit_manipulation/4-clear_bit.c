#include "main.h"
/**
 * clear_bit -Establece el valor de un bit indicado en 0.
 * @n:Puntero al numero.
 * @index:Posicion para encontrar el bit a imprimir.
 * Return:1 si funciona , -1 si no.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int operacion;

	if (index > sizeof(n) * 8)
	{
		return (-1);
	}

	operacion = ~(1 << index);
	*n = *n & operacion;

	return (1);
}
