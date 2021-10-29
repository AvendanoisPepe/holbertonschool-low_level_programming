#include "main.h"
#include <stdlib.h>
/**
 * *probando-Ingresar o llenar la memoria reservada.
 * @guardar:malloc pasado por parametro.
 * @add:Inicializador.
 * @byt: numero de veces que recorre a base de la mul de los
 * parametros de la otra funcion.
 * Return:puntero a guardar.
*/
char *probando(char *guardar, int add, unsigned int byt)
{
	unsigned int iterador = 0;

	while (iterador < byt)
	{
		guardar[iterador] = add;
		byt++;
	}
	return (guardar);
}
/**
 * *_calloc-Con malloc se asigna la memoria a la matrix,
 * @nmemb:elementos de la matrix.
 * @size:tamaño de cada elemento.
 * Return:puntero a la matrix.
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *guardarT;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	guardarT = malloc(nmemb * size);

	if (guardarT == NULL)
	{
		return (NULL);
	}

	probando(guardarT, 0, nmemb * size);

	return (guardarT);
}
