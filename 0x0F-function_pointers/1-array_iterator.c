#include "function_pointers.h"
#include <stddef.h>
/**
 * array_iterator - Ejecuta una funcion dada como parametro.
 * @array: Matriz en la cual iterar.
 * @size: Tamaño de la matriz.
 * @action: Puntero a la funcion que se usa.
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int iterador = 0;

	if (!array || !size)
	{
		return;
	}

	while (iterador < size)
	{
		action(array[iterador]);
		iterador++;
	}
}
