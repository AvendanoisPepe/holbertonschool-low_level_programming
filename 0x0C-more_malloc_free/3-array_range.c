#include "main.h"
#include <stdlib.h>
/**
 * *array_range-Creando una matrix de numeros.
 * @min:minimo de valores.
 * @max:maximo de valores y numeros almacenados.
 * Return:puntero a guardarT.
*/
int *array_range(int min, int max)
{
	int *guardarT;
	int iterador = 0;
	int totalito;

	if (min > max)
	{
		return (NULL);
	}
	totalito = max - min + 1;

	guardarT = malloc(sizeof(int) * totalito);

	if (guardarT == NULL)
	{
		return (NULL);
	}

	while (min <= max)
	{
		guardarT[iterador] = min++;
		iterador++;
	}
	return (guardarT);
}
