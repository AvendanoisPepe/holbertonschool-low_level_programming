#include "search_algos.h"

/**
 * imprimir - imprime una matriz separada por ,
 *
 * @array: matriz a imprimir.
 * @first: primero
 * @last: ultimo
 */

void imprimir(int *array, size_t first, size_t last)
{
	size_t i;

	printf("Searching in array: ");
	for (i = first; i <= last; i++)
	{
		if (i != first)
		printf(", ");
		printf("%d", array[i]);
	}
	printf("\n");
}

/**
 * binary_search - busca un valor en una matriz de enteros
 *
 * @array: un puntero al primer elemento de la matriz para buscar
 * @size: el número de elementos en la matriz
 * @value: el valor a buscar
 *
 * Return:  el índice donde se encuentra el valor o
 * -1 en caso de falla o no encontrado.
 */

int binary_search(int *array, size_t size, int value)
{
	size_t i = 0, first = 0, last = size - 1;

	if (array)
	{
		while (first <= last)
		{
			imprimir(array, first, last);
			i = (first + last) / 2;
			if (value > array[i])
				first = i + 1;
			else if (value < array[i])
				last = i - 1;
			else
				return (i);
			}
	}
	return (-1);
}
