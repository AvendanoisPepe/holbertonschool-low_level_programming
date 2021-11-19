#include "main.h"
/**
 * flip_bits - Cuenta el numero de bits que cambia
 * @n:Primer numero.
 * @m:Segundo numero.
 * Return:Número de bits para cambiar.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int iterador =  8 * sizeof(n) - 1;
	int resultado = 0;

	while (iterador >= 0)
	{
		if (((n ^ m) >> iterador) & 1)
		{
			resultado++;
		}
		iterador--;
	}
	return (resultado);
}
