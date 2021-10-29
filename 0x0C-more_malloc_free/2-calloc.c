#include "main.h"
#include <stdlib.h>
/**
 * *_calloc-Con malloc se asigna la memoria a la matrix,
 * @nmemb:elementos de la matrix.
 * @size:tamaño de cada elemento.
 * Return:puntero a la matrix.
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *guardarT;
	unsigned int iterador = 0;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	guardarT = malloc(nmemb * size);

	if (guardarT == NULL)
	{
		return (NULL);
	}

	while (iterador < (nmemb * size))
	{
		guardarT[iterador] = 0;
		iterador++;
	}

	return (guardarT);
}
