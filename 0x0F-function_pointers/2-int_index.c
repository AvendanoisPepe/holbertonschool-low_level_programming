#include "function_pointers.h"
/**
 * int_index - Busca un numero entero.
 * @array:Matriz en la que se hace la busqueda,
 * @size:Tamaño de la matriz,
 * @cmp:Puntero a funcion que compara los datos.
 * Return:Numero que hace coincidencia
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int iterador = 0;

	if (array == NULL || size <= 0 || cmp == NULL)
	{
		return (-1);
	}

	while (iterador < size)
	{
		if (cmp(array[iterador]) != 0)
		{
			return (iterador);
		}
		iterador++;
	}

	return (-1);
}
