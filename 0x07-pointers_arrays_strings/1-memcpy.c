#include "main.h"
/**
 *  *_memcpy-Copia el area de la memoria.
 * @dest:Area de memoria de destino.
 * @src:Area de memoria de origen.
 * @n:Numero de bytes que ponen limite a la copia.
 * Return:El destino, osea dest.
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int datito = 0;

	while (datito  < n)
	{
	dest[datito] = src[datito];
	datito++;
	}

	return (dest);
}
