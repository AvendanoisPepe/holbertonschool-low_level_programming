#include "search_algos.h"
/**
 * linear_search -  busca un valor en una matriz de enteros
 *
 * @array: un puntero al primer elemento de la matriz para buscar
 * @size: el número de elementos en la matriz
 * @value: el valor a buscar
 * Return: el primer índice donde se encuentra el valor o
 * -1 en caso de falla o no encontrado
 */

int linear_search(int *array, size_t size, int value)
{
	size_t ite = 0;

	if (array)
	{
		while (ite < size)
		{
			printf("Value checked array[%lu] = [%d]\n", ite, array[ite]);
			if (array[ite] == value)
			{
				return (ite);
			}
			ite++;
		}
	}
	return (-1);
}
