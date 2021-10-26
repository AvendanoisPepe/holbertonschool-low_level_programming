#include "main.h"
#include <stdlib.h>
/**
 *  *create_array-Se crea la matriz guardarT y la inicializo con c,
 * @size:Tamaño de la matriz.
 * @c:caracter que la inicializa.
 * Return:Puntero a la matriz si se logra, si no null.
*/
char *create_array(unsigned int size, char c)
{
	char *guardarT;
	unsigned int iterador = 0;

	if (size == 0)
	{
		return (NULL);
	}

	guardarT = malloc(sizeof(char) * size);

	if (guardarT == NULL)
	{
		return (0);
	}

	while (iterador < size)
	{
		guardarT[iterador] = c;
		iterador++;
	}

	return (guardarT);
}
