#include "main.h"
#include <stdlib.h>
/**
 * *malloc_checked- Asignamos memoria.
 * @b:Cantidad de bytes a asignar.
 * Return:Puntero a la memoria recien asignada.
*/
void *malloc_checked(unsigned int b)
{
	void *guardarT;

	guardarT = malloc(b);

	if (guardarT == NULL)
	{
		exit(98);
	}

	return (guardarT);
}
